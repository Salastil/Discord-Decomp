package androidx.work;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kt.g;
import v3.f;
import v3.h;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u00002\u00020\u0001B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0004"}, d2 = {"Landroidx/work/ArrayCreatingInputMerger;", "Lv3/h;", "<init>", "()V", "work-runtime_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ArrayCreatingInputMerger extends h {
    @Override // v3.h
    public final f a(ArrayList inputs) {
        Object newArray;
        Intrinsics.checkNotNullParameter(inputs, "inputs");
        g gVar = new g();
        HashMap hashMap = new HashMap();
        Iterator it = inputs.iterator();
        while (it.hasNext()) {
            Map unmodifiableMap = Collections.unmodifiableMap(((f) it.next()).a);
            Intrinsics.checkNotNullExpressionValue(unmodifiableMap, "input.keyValueMap");
            for (Map.Entry entry : unmodifiableMap.entrySet()) {
                String key = (String) entry.getKey();
                Object value = entry.getValue();
                Class cls = value != null ? value.getClass() : String.class;
                Object obj = hashMap.get(key);
                Intrinsics.checkNotNullExpressionValue(key, "key");
                if (obj != null) {
                    Class<?> cls2 = obj.getClass();
                    if (Intrinsics.areEqual(cls2, cls)) {
                        Intrinsics.checkNotNullExpressionValue(value, "value");
                        int length = Array.getLength(obj);
                        int length2 = Array.getLength(value);
                        Class<?> componentType = obj.getClass().getComponentType();
                        Intrinsics.checkNotNull(componentType);
                        Object newArray2 = Array.newInstance(componentType, length + length2);
                        System.arraycopy(obj, 0, newArray2, 0, length);
                        System.arraycopy(value, 0, newArray2, length, length2);
                        Intrinsics.checkNotNullExpressionValue(newArray2, "newArray");
                        value = newArray2;
                        Intrinsics.checkNotNullExpressionValue(value, "if (existingValue == nul…      }\n                }");
                        hashMap.put(key, value);
                    } else {
                        if (!Intrinsics.areEqual(cls2.getComponentType(), cls)) {
                            throw new IllegalArgumentException();
                        }
                        int length3 = Array.getLength(obj);
                        newArray = Array.newInstance(cls, length3 + 1);
                        System.arraycopy(obj, 0, newArray, 0, length3);
                        Array.set(newArray, length3, value);
                        Intrinsics.checkNotNullExpressionValue(newArray, "newArray");
                        value = newArray;
                        Intrinsics.checkNotNullExpressionValue(value, "if (existingValue == nul…      }\n                }");
                        hashMap.put(key, value);
                    }
                } else if (cls.isArray()) {
                    Intrinsics.checkNotNullExpressionValue(value, "if (existingValue == nul…      }\n                }");
                    hashMap.put(key, value);
                } else {
                    newArray = Array.newInstance(cls, 1);
                    Array.set(newArray, 0, value);
                    Intrinsics.checkNotNullExpressionValue(newArray, "newArray");
                    value = newArray;
                    Intrinsics.checkNotNullExpressionValue(value, "if (existingValue == nul…      }\n                }");
                    hashMap.put(key, value);
                }
            }
        }
        gVar.b(hashMap);
        f fVar = new f(gVar.a);
        f.b(fVar);
        Intrinsics.checkNotNullExpressionValue(fVar, "output.build()");
        return fVar;
    }
}
