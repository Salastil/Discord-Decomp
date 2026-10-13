package net.time4j.tz.model;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.ObjectOutput;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import w3.q;

/* loaded from: classes3.dex */
public final class a extends o {
    private static final long serialVersionUID = -5264909488983076587L;

    /* renamed from: e, reason: collision with root package name */
    public final transient net.time4j.tz.n[] f15352e;

    /* renamed from: i, reason: collision with root package name */
    public final transient List f15353i;

    /* renamed from: v, reason: collision with root package name */
    public transient int f15354v = 0;

    public a(List list) {
        List unmodifiableList;
        if (list.isEmpty()) {
            throw new IllegalArgumentException("Missing timezone transitions.");
        }
        net.time4j.tz.n[] nVarArr = (net.time4j.tz.n[]) list.toArray(new net.time4j.tz.n[list.size()]);
        boolean z5 = false;
        for (net.time4j.tz.n nVar : nVarArr) {
            z5 = z5 || nVar.b() < 0;
        }
        this.f15352e = nVarArr;
        long a = o.a(1);
        if (0 > a) {
            throw new IllegalArgumentException("Start after end.");
        }
        int b10 = b(0L, nVarArr);
        int b11 = b(a, nVarArr);
        if (b11 == 0) {
            unmodifiableList = Collections.EMPTY_LIST;
        } else {
            if (b10 > 0 && nVarArr[b10 - 1].c() == 0) {
                b10--;
            }
            int i5 = b11 - 1;
            i5 = nVarArr[i5].c() == a ? b11 - 2 : i5;
            if (b10 > i5) {
                unmodifiableList = Collections.EMPTY_LIST;
            } else {
                ArrayList arrayList = new ArrayList((i5 - b10) + 1);
                while (b10 <= i5) {
                    arrayList.add(nVarArr[b10]);
                    b10++;
                }
                unmodifiableList = Collections.unmodifiableList(arrayList);
            }
        }
        this.f15353i = unmodifiableList;
    }

    public static int b(long j, net.time4j.tz.n[] nVarArr) {
        int length = nVarArr.length - 1;
        int i5 = 0;
        while (i5 <= length) {
            int i6 = (i5 + length) / 2;
            if (nVarArr[i6].c() <= j) {
                i5 = i6 + 1;
            } else {
                length = i6 - 1;
            }
        }
        return i5;
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(126, this);
    }

    /* JADX WARN: Removed duplicated region for block: B:34:0x00a3  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x00d3  */
    /* JADX WARN: Removed duplicated region for block: B:38:0x00d8  */
    /* JADX WARN: Removed duplicated region for block: B:41:0x00db A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x00ae  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(int i5, ObjectOutput objectOutput) {
        int i6;
        net.time4j.tz.n[] nVarArr = this.f15352e;
        int min = Math.min(i5, nVarArr.length);
        objectOutput.writeInt(min);
        if (min > 0) {
            byte b10 = 0;
            int d6 = nVarArr[0].d();
            SPX.m(objectOutput, d6);
            int i10 = 0;
            while (i10 < min) {
                net.time4j.tz.n nVar = nVarArr[i10];
                int e9 = nVar.e();
                byte b11 = e9 != d6 ? (byte) 1 : b10;
                byte b12 = b11 != 0 ? (byte) IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT : b10;
                int b13 = nVar.b();
                byte b14 = b13 != 0 ? b13 != 3600 ? b13 != 7200 ? b10 : (byte) 3 : (byte) 2 : (byte) 1;
                byte b15 = (byte) (b12 | (b14 << 5));
                long c6 = nVar.c() + d6;
                long j = c6 + 7200;
                if (j >= -4575744000L && j < 18067104000L) {
                    int o6 = q.o(86400, j);
                    if (o6 == 0) {
                        i6 = 1;
                    } else if (o6 == 60) {
                        i6 = 2;
                    } else if (o6 == 3600) {
                        i6 = 3;
                    } else if (o6 == 7200) {
                        i6 = 4;
                    } else if (o6 == 10800) {
                        i6 = 5;
                    } else if (o6 == 14400) {
                        i6 = 6;
                    } else if (o6 == 18000) {
                        i6 = 7;
                    }
                    byte b16 = (byte) ((i6 << 2) | b15);
                    if (i6 != 0) {
                        objectOutput.writeByte(b16);
                        objectOutput.writeLong(nVar.c());
                    } else {
                        int i11 = (int) ((c6 + 4575751200L) / 86400);
                        objectOutput.writeByte((byte) (b16 | ((byte) ((i11 >>> 16) & 3))));
                        objectOutput.writeByte((i11 >>> 8) & 255);
                        objectOutput.writeByte(i11 & 255);
                    }
                    if (b14 == 0) {
                        SPX.m(objectOutput, b13);
                    }
                    if (b11 == 0) {
                        SPX.m(objectOutput, e9);
                    }
                    i10++;
                    d6 = e9;
                    b10 = 0;
                }
                i6 = 0;
                byte b162 = (byte) ((i6 << 2) | b15);
                if (i6 != 0) {
                }
                if (b14 == 0) {
                }
                if (b11 == 0) {
                }
                i10++;
                d6 = e9;
                b10 = 0;
            }
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof a) {
            return Arrays.equals(this.f15352e, ((a) obj).f15352e);
        }
        return false;
    }

    public final int hashCode() {
        int i5 = this.f15354v;
        if (i5 != 0) {
            return i5;
        }
        int hashCode = Arrays.hashCode(this.f15352e);
        this.f15354v = hashCode;
        return hashCode;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(32);
        a3.e.v(a.class, sb2, "[transition-count=");
        sb2.append(this.f15352e.length);
        sb2.append(",hash=");
        sb2.append(hashCode());
        sb2.append(']');
        return sb2.toString();
    }
}
