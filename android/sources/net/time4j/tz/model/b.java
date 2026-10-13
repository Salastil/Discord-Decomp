package net.time4j.tz.model;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.util.Arrays;
import java.util.List;

/* loaded from: classes3.dex */
public final class b extends o {
    private static final long serialVersionUID = 1749643877954103721L;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15355e;

    /* renamed from: i, reason: collision with root package name */
    public final transient a f15356i;

    /* renamed from: v, reason: collision with root package name */
    public final transient m f15357v;

    /* renamed from: w, reason: collision with root package name */
    public transient int f15358w = 0;

    public b(int i5, List list, List list2) {
        this.f15355e = i5;
        a aVar = new a(list);
        this.f15356i = aVar;
        this.f15357v = new m(aVar.f15352e[r2.length - 1], list2);
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(127, this);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof b) {
            b bVar = (b) obj;
            a aVar = bVar.f15356i;
            int i5 = bVar.f15355e;
            net.time4j.tz.n[] nVarArr = this.f15356i.f15352e;
            int min = Math.min(this.f15355e, nVarArr.length);
            if (min == Math.min(i5, aVar.f15352e.length)) {
                int i6 = 0;
                while (true) {
                    if (i6 < min) {
                        if (!nVarArr[i6].equals(aVar.f15352e[i6])) {
                            break;
                        }
                        i6++;
                    } else if (this.f15357v.f15371i.equals(bVar.f15357v.f15371i)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.f15358w;
        if (i5 != 0) {
            return i5;
        }
        net.time4j.tz.n[] nVarArr = this.f15356i.f15352e;
        int min = Math.min(this.f15355e, nVarArr.length);
        net.time4j.tz.n[] nVarArr2 = new net.time4j.tz.n[min];
        System.arraycopy(nVarArr, 0, nVarArr2, 0, min);
        int hashCode = (this.f15357v.f15371i.hashCode() * 37) + Arrays.hashCode(nVarArr2);
        this.f15358w = hashCode;
        return hashCode;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(32);
        a3.e.v(b.class, sb2, "[transition-count=");
        sb2.append(this.f15355e);
        sb2.append(",hash=");
        sb2.append(hashCode());
        sb2.append(",last-rules=");
        sb2.append(this.f15357v.f15371i);
        sb2.append(']');
        return sb2.toString();
    }
}
