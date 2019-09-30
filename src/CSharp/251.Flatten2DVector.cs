
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.Flatten2DVector
{

    public class Vector2D
    {
        List<List<int>> listOfList;
        int listIndex;
        int elemIndex;
        public Vector2D(List<List<int>> vec2d)
        {
            listOfList = vec2d;
            listIndex = 0;
            elemIndex = 0;
        }

        public int Next()
        {
            return listOfList[listIndex][elemIndex++];
        }

        public bool HasNext()
        {
            while (listIndex < listOfList.Count)
            {
                if (elemIndex < listOfList[listIndex].Count)
                {
                    return true;
                }
                else
                {
                    listIndex++;
                    elemIndex = 0;
                }
            }
            return false;
        }
    }

}