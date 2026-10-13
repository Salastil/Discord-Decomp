package net.time4j.tz;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.Serializable;

/* loaded from: classes3.dex */
public final class n implements Comparable, Serializable {
    private static final long serialVersionUID = 4594838367057225304L;
    private final int dst;
    private final long posix;
    private final int previous;
    private final int total;

    public n(long j, int i5, int i6, int i10) {
        this.posix = j;
        this.previous = i5;
        this.total = i6;
        this.dst = i10;
        a(i5);
        a(i6);
        if (i10 != Integer.MAX_VALUE) {
            a(i10);
        }
    }

    public static void a(int i5) {
        if (i5 < -64800 || i5 > 64800) {
            throw new IllegalArgumentException(k0.d.i(i5, "Offset out of range: "));
        }
    }

    private void readObject(ObjectInputStream objectInputStream) {
        objectInputStream.defaultReadObject();
        try {
            a(this.previous);
            a(this.total);
            int i5 = this.dst;
            if (i5 != Integer.MAX_VALUE) {
                a(i5);
            }
        } catch (IllegalArgumentException e9) {
            throw new InvalidObjectException(e9.getMessage());
        }
    }

    public final int b() {
        int i5 = this.dst;
        if (i5 == Integer.MAX_VALUE) {
            return 0;
        }
        return i5;
    }

    public final long c() {
        return this.posix;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        n nVar = (n) obj;
        long j = this.posix - nVar.posix;
        if (j == 0) {
            j = this.previous - nVar.previous;
            if (j == 0) {
                j = this.total - nVar.total;
                if (j == 0) {
                    j = b() - nVar.b();
                    if (j == 0) {
                        return 0;
                    }
                }
            }
        }
        return j < 0 ? -1 : 1;
    }

    public final int d() {
        return this.previous;
    }

    public final int e() {
        return this.total - b();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof n) {
            n nVar = (n) obj;
            if (this.posix == nVar.posix && this.previous == nVar.previous && this.total == nVar.total && b() == nVar.b()) {
                return true;
            }
        }
        return false;
    }

    public final int f() {
        return this.total;
    }

    public final int hashCode() {
        long j = this.posix;
        return (int) (j ^ (j >>> 32));
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        sb2.append("[POSIX=");
        sb2.append(this.posix);
        sb2.append(", previous-offset=");
        sb2.append(this.previous);
        sb2.append(", total-offset=");
        sb2.append(this.total);
        sb2.append(", dst-offset=");
        sb2.append(b());
        sb2.append(']');
        return sb2.toString();
    }
}
