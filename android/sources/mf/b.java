package mf;

import android.os.IBinder;
import android.os.IInterface;
import bf.t;
import java.lang.reflect.Field;

/* loaded from: classes3.dex */
public final class b extends ag.a implements a {

    /* renamed from: g, reason: collision with root package name */
    public final Object f14492g;

    public b(Object obj) {
        super("com.google.android.gms.dynamic.IObjectWrapper", 9);
        this.f14492g = obj;
    }

    public static Object A(a aVar) {
        if (aVar instanceof b) {
            return ((b) aVar).f14492g;
        }
        IBinder asBinder = aVar.asBinder();
        Field[] declaredFields = asBinder.getClass().getDeclaredFields();
        Field field = null;
        int i5 = 0;
        for (Field field2 : declaredFields) {
            if (!field2.isSynthetic()) {
                i5++;
                field = field2;
            }
        }
        if (i5 != 1) {
            int length = declaredFields.length;
            StringBuilder sb2 = new StringBuilder(String.valueOf(length).length() + 53);
            sb2.append("Unexpected number of IObjectWrapper declared fields: ");
            sb2.append(length);
            throw new IllegalArgumentException(sb2.toString());
        }
        t.g(field);
        if (field.isAccessible()) {
            throw new IllegalArgumentException("IObjectWrapper declared field not private!");
        }
        field.setAccessible(true);
        try {
            return field.get(asBinder);
        } catch (IllegalAccessException e9) {
            throw new IllegalArgumentException("Could not access the field in remoteBinder.", e9);
        } catch (NullPointerException e10) {
            throw new IllegalArgumentException("Binder object is null.", e10);
        }
    }

    public static a z(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.dynamic.IObjectWrapper");
        return queryLocalInterface instanceof a ? (a) queryLocalInterface : new c(iBinder, "com.google.android.gms.dynamic.IObjectWrapper", 5);
    }
}
