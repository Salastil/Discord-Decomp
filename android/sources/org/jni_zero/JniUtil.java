package org.jni_zero;

import java.util.HashMap;
import java.util.Map;

/* loaded from: classes.dex */
public class JniUtil {
    @CalledByNative
    private static Map<Object, Object> arrayToMap(Object[] objArr) {
        int length = objArr.length;
        HashMap hashMap = new HashMap(length / 2);
        for (int i5 = 0; i5 < length; i5 += 2) {
            hashMap.put(objArr[i5], objArr[i5 + 1]);
        }
        return hashMap;
    }

    @CalledByNative
    private static Object[] mapToArray(Map<Object, Object> map) {
        Object[] objArr = new Object[map.size() * 2];
        int i5 = 0;
        for (Map.Entry<Object, Object> entry : map.entrySet()) {
            int i6 = i5 + 1;
            objArr[i5] = entry.getKey();
            i5 += 2;
            objArr[i6] = entry.getValue();
        }
        return objArr;
    }
}
