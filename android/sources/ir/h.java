package ir;

import java.lang.reflect.Array;
import java.util.AbstractList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Iterator;
import java.util.RandomAccess;

/* loaded from: classes3.dex */
public final class h extends AbstractList implements RandomAccess {

    /* renamed from: d, reason: collision with root package name */
    public int f12264d;

    /* renamed from: e, reason: collision with root package name */
    public Object f12265e;

    public static /* synthetic */ void a(int i5) {
        String str = (i5 == 2 || i5 == 3 || i5 == 5 || i5 == 6 || i5 == 7) ? "@NotNull method %s.%s must not return null" : "Argument for @NotNull parameter '%s' of %s.%s must not be null";
        Object[] objArr = new Object[(i5 == 2 || i5 == 3 || i5 == 5 || i5 == 6 || i5 == 7) ? 2 : 3];
        switch (i5) {
            case 2:
            case 3:
            case 5:
            case 6:
            case 7:
                objArr[0] = "kotlin/reflect/jvm/internal/impl/utils/SmartList";
                break;
            case 4:
                objArr[0] = "a";
                break;
            default:
                objArr[0] = "elements";
                break;
        }
        if (i5 == 2 || i5 == 3) {
            objArr[1] = "iterator";
        } else if (i5 == 5 || i5 == 6 || i5 == 7) {
            objArr[1] = "toArray";
        } else {
            objArr[1] = "kotlin/reflect/jvm/internal/impl/utils/SmartList";
        }
        switch (i5) {
            case 2:
            case 3:
            case 5:
            case 6:
            case 7:
                break;
            case 4:
                objArr[2] = "toArray";
                break;
            default:
                objArr[2] = "<init>";
                break;
        }
        String format = String.format(str, objArr);
        if (i5 != 2 && i5 != 3 && i5 != 5 && i5 != 6 && i5 != 7) {
            throw new IllegalArgumentException(format);
        }
        throw new IllegalStateException(format);
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final boolean add(Object obj) {
        int i5 = this.f12264d;
        if (i5 == 0) {
            this.f12265e = obj;
        } else if (i5 == 1) {
            this.f12265e = new Object[]{this.f12265e, obj};
        } else {
            Object[] objArr = (Object[]) this.f12265e;
            int length = objArr.length;
            if (i5 >= length) {
                int i6 = ((length * 3) / 2) + 1;
                int i10 = i5 + 1;
                if (i6 < i10) {
                    i6 = i10;
                }
                Object[] objArr2 = new Object[i6];
                this.f12265e = objArr2;
                System.arraycopy(objArr, 0, objArr2, 0, length);
                objArr = objArr2;
            }
            objArr[this.f12264d] = obj;
        }
        this.f12264d++;
        ((AbstractList) this).modCount++;
        return true;
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.util.List
    public final void clear() {
        this.f12265e = null;
        this.f12264d = 0;
        ((AbstractList) this).modCount++;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object get(int i5) {
        int i6;
        if (i5 >= 0 && i5 < (i6 = this.f12264d)) {
            return i6 == 1 ? this.f12265e : ((Object[]) this.f12265e)[i5];
        }
        StringBuilder r5 = a3.e.r(i5, "Index: ", ", Size: ");
        r5.append(this.f12264d);
        throw new IndexOutOfBoundsException(r5.toString());
    }

    @Override // java.util.AbstractList, java.util.AbstractCollection, java.util.Collection, java.lang.Iterable, java.util.List
    public final Iterator iterator() {
        int i5 = this.f12264d;
        if (i5 == 0) {
            return f.f12260d;
        }
        if (i5 == 1) {
            return new g(this);
        }
        Iterator it = super.iterator();
        if (it != null) {
            return it;
        }
        a(3);
        throw null;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object remove(int i5) {
        int i6;
        Object obj;
        if (i5 < 0 || i5 >= (i6 = this.f12264d)) {
            StringBuilder r5 = a3.e.r(i5, "Index: ", ", Size: ");
            r5.append(this.f12264d);
            throw new IndexOutOfBoundsException(r5.toString());
        }
        if (i6 == 1) {
            obj = this.f12265e;
            this.f12265e = null;
        } else {
            Object[] objArr = (Object[]) this.f12265e;
            Object obj2 = objArr[i5];
            if (i6 == 2) {
                this.f12265e = objArr[1 - i5];
            } else {
                int i10 = (i6 - i5) - 1;
                if (i10 > 0) {
                    System.arraycopy(objArr, i5 + 1, objArr, i5, i10);
                }
                objArr[this.f12264d - 1] = null;
            }
            obj = obj2;
        }
        this.f12264d--;
        ((AbstractList) this).modCount++;
        return obj;
    }

    @Override // java.util.AbstractList, java.util.List
    public final Object set(int i5, Object obj) {
        int i6;
        if (i5 < 0 || i5 >= (i6 = this.f12264d)) {
            StringBuilder r5 = a3.e.r(i5, "Index: ", ", Size: ");
            r5.append(this.f12264d);
            throw new IndexOutOfBoundsException(r5.toString());
        }
        if (i6 == 1) {
            Object obj2 = this.f12265e;
            this.f12265e = obj;
            return obj2;
        }
        Object[] objArr = (Object[]) this.f12265e;
        Object obj3 = objArr[i5];
        objArr[i5] = obj;
        return obj3;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f12264d;
    }

    @Override // java.util.List
    public final void sort(Comparator comparator) {
        int i5 = this.f12264d;
        if (i5 >= 2) {
            Arrays.sort((Object[]) this.f12265e, 0, i5, comparator);
        }
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final Object[] toArray(Object[] objArr) {
        if (objArr == null) {
            a(4);
            throw null;
        }
        int length = objArr.length;
        int i5 = this.f12264d;
        if (i5 == 1) {
            if (length == 0) {
                Object[] objArr2 = (Object[]) Array.newInstance(objArr.getClass().getComponentType(), 1);
                objArr2[0] = this.f12265e;
                return objArr2;
            }
            objArr[0] = this.f12265e;
        } else {
            if (length < i5) {
                Object[] copyOf = Arrays.copyOf((Object[]) this.f12265e, i5, objArr.getClass());
                if (copyOf != null) {
                    return copyOf;
                }
                a(6);
                throw null;
            }
            if (i5 != 0) {
                System.arraycopy(this.f12265e, 0, objArr, 0, i5);
            }
        }
        int i6 = this.f12264d;
        if (length > i6) {
            objArr[i6] = null;
        }
        return objArr;
    }

    @Override // java.util.AbstractList, java.util.List
    public final void add(int i5, Object obj) {
        int i6;
        if (i5 >= 0 && i5 <= (i6 = this.f12264d)) {
            if (i6 == 0) {
                this.f12265e = obj;
            } else if (i6 == 1 && i5 == 0) {
                this.f12265e = new Object[]{obj, this.f12265e};
            } else {
                Object[] objArr = new Object[i6 + 1];
                if (i6 == 1) {
                    objArr[0] = this.f12265e;
                } else {
                    Object[] objArr2 = (Object[]) this.f12265e;
                    System.arraycopy(objArr2, 0, objArr, 0, i5);
                    System.arraycopy(objArr2, i5, objArr, i5 + 1, this.f12264d - i5);
                }
                objArr[i5] = obj;
                this.f12265e = objArr;
            }
            this.f12264d++;
            ((AbstractList) this).modCount++;
            return;
        }
        StringBuilder r5 = a3.e.r(i5, "Index: ", ", Size: ");
        r5.append(this.f12264d);
        throw new IndexOutOfBoundsException(r5.toString());
    }
}
