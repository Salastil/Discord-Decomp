package o3;

import android.os.Parcel;
import android.os.Parcelable;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import s.e;

/* loaded from: classes.dex */
public abstract class a {
    public final e a;

    /* renamed from: b, reason: collision with root package name */
    public final e f15731b;

    /* renamed from: c, reason: collision with root package name */
    public final e f15732c;

    public a(e eVar, e eVar2, e eVar3) {
        this.a = eVar;
        this.f15731b = eVar2;
        this.f15732c = eVar3;
    }

    public abstract b a();

    public final Class b(Class cls) {
        String name = cls.getName();
        e eVar = this.f15732c;
        Class cls2 = (Class) eVar.get(name);
        if (cls2 != null) {
            return cls2;
        }
        Class<?> cls3 = Class.forName(cls.getPackage().getName() + "." + cls.getSimpleName() + "Parcelizer", false, cls.getClassLoader());
        eVar.put(cls.getName(), cls3);
        return cls3;
    }

    public final Method c(String str) {
        e eVar = this.a;
        Method method = (Method) eVar.get(str);
        if (method != null) {
            return method;
        }
        System.currentTimeMillis();
        Method declaredMethod = Class.forName(str, true, a.class.getClassLoader()).getDeclaredMethod("read", a.class);
        eVar.put(str, declaredMethod);
        return declaredMethod;
    }

    public final Method d(Class cls) {
        String name = cls.getName();
        e eVar = this.f15731b;
        Method method = (Method) eVar.get(name);
        if (method != null) {
            return method;
        }
        Class b10 = b(cls);
        System.currentTimeMillis();
        Method declaredMethod = b10.getDeclaredMethod("write", cls, a.class);
        eVar.put(cls.getName(), declaredMethod);
        return declaredMethod;
    }

    public abstract boolean e(int i5);

    public final int f(int i5, int i6) {
        return !e(i6) ? i5 : ((b) this).f15734e.readInt();
    }

    public final Parcelable g(Parcelable parcelable, int i5) {
        if (!e(i5)) {
            return parcelable;
        }
        return ((b) this).f15734e.readParcelable(b.class.getClassLoader());
    }

    public final c h() {
        String readString = ((b) this).f15734e.readString();
        if (readString == null) {
            return null;
        }
        try {
            return (c) c(readString).invoke(null, a());
        } catch (ClassNotFoundException e9) {
            throw new RuntimeException("VersionedParcel encountered ClassNotFoundException", e9);
        } catch (IllegalAccessException e10) {
            throw new RuntimeException("VersionedParcel encountered IllegalAccessException", e10);
        } catch (NoSuchMethodException e11) {
            throw new RuntimeException("VersionedParcel encountered NoSuchMethodException", e11);
        } catch (InvocationTargetException e12) {
            if (e12.getCause() instanceof RuntimeException) {
                throw ((RuntimeException) e12.getCause());
            }
            throw new RuntimeException("VersionedParcel encountered InvocationTargetException", e12);
        }
    }

    public abstract void i(int i5);

    public final void j(int i5, int i6) {
        i(i6);
        ((b) this).f15734e.writeInt(i5);
    }

    public final void k(Parcelable parcelable, int i5) {
        i(i5);
        ((b) this).f15734e.writeParcelable(parcelable, 0);
    }

    public final void l(c cVar) {
        if (cVar == null) {
            ((b) this).f15734e.writeString(null);
            return;
        }
        try {
            ((b) this).f15734e.writeString(b(cVar.getClass()).getName());
            b a = a();
            try {
                d(cVar.getClass()).invoke(null, cVar, a);
                Parcel parcel = a.f15734e;
                int i5 = a.f15738i;
                if (i5 >= 0) {
                    int i6 = a.f15733d.get(i5);
                    int dataPosition = parcel.dataPosition();
                    parcel.setDataPosition(i6);
                    parcel.writeInt(dataPosition - i6);
                    parcel.setDataPosition(dataPosition);
                }
            } catch (ClassNotFoundException e9) {
                throw new RuntimeException("VersionedParcel encountered ClassNotFoundException", e9);
            } catch (IllegalAccessException e10) {
                throw new RuntimeException("VersionedParcel encountered IllegalAccessException", e10);
            } catch (NoSuchMethodException e11) {
                throw new RuntimeException("VersionedParcel encountered NoSuchMethodException", e11);
            } catch (InvocationTargetException e12) {
                if (!(e12.getCause() instanceof RuntimeException)) {
                    throw new RuntimeException("VersionedParcel encountered InvocationTargetException", e12);
                }
                throw ((RuntimeException) e12.getCause());
            }
        } catch (ClassNotFoundException e13) {
            throw new RuntimeException(cVar.getClass().getSimpleName().concat(" does not have a Parcelizer"), e13);
        }
    }
}
