package net.time4j.tz.model;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.Externalizable;
import java.io.InvalidClassException;
import java.io.InvalidObjectException;
import java.io.ObjectInput;
import java.io.ObjectOutput;
import java.io.Serializable;
import java.io.StreamCorruptedException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import net.time4j.n1;
import net.time4j.r0;
import net.time4j.u0;
import net.time4j.w0;
import net.time4j.z0;
import w3.q;

/* loaded from: classes3.dex */
final class SPX implements Externalizable {
    private static final long serialVersionUID = 6526945678752534989L;

    /* renamed from: d, reason: collision with root package name */
    public transient Serializable f15350d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15351e;

    public SPX() {
    }

    public static c a(ObjectInput objectInput) {
        byte readByte = objectInput.readByte();
        r0 b10 = r0.b((readByte & 255) >>> 4);
        int i5 = readByte & 15;
        l lVar = l.f15368d[i5 % 3];
        int f2 = f(i5);
        byte readByte2 = objectInput.readByte();
        int i6 = (readByte2 & 255) >>> 3;
        n1 d6 = n1.d(readByte2 & 7);
        byte readByte3 = objectInput.readByte();
        boolean z5 = ((readByte3 & 255) >>> 7) == 1;
        int i10 = readByte3 & 63;
        if (f2 == -1) {
            f2 = d(objectInput);
        }
        return new c(b10, i6, d6, i10 == 63 ? objectInput.readInt() : i10 * 1800, lVar, f2, z5);
    }

    public static f b(ObjectInput objectInput) {
        int i5;
        byte readByte = objectInput.readByte();
        int i6 = (readByte & 255) >>> 4;
        int i10 = readByte & 15;
        l lVar = l.f15368d[i10 % 3];
        int f2 = f(i10);
        byte readByte2 = objectInput.readByte();
        int i11 = (readByte2 & 255) >>> 3;
        switch (readByte2 & 7) {
            case 1:
                i5 = 0;
                break;
            case 2:
                i5 = 3600;
                break;
            case 3:
                i5 = 7200;
                break;
            case 4:
                i5 = 10800;
                break;
            case 5:
                i5 = 79200;
                break;
            case 6:
                i5 = 82800;
                break;
            case 7:
                i5 = 86400;
                break;
            default:
                i5 = -1;
                break;
        }
        if (f2 == -1) {
            f2 = d(objectInput);
        }
        int i12 = f2;
        if (i5 == -1) {
            i5 = objectInput.readInt();
        }
        return new f(r0.b(i6), i11, i5, lVar, i12);
    }

    public static h c(ObjectInput objectInput) {
        byte readByte = objectInput.readByte();
        r0 b10 = r0.b((readByte & 255) >>> 4);
        int i5 = readByte & 15;
        l lVar = l.f15368d[i5 % 3];
        int f2 = f(i5);
        byte readByte2 = objectInput.readByte();
        n1 d6 = n1.d((readByte2 & 255) >>> 5);
        int i6 = readByte2 & 31;
        if (f2 == -1) {
            f2 = d(objectInput);
        }
        return new h(b10, d6, i6 == 31 ? objectInput.readInt() : i6 * 3600, lVar, f2);
    }

    public static int d(DataInput dataInput) {
        byte readByte = dataInput.readByte();
        return readByte == Byte.MAX_VALUE ? dataInput.readInt() : readByte * 900;
    }

    public static List e(ObjectInput objectInput) {
        d b10;
        byte readByte = objectInput.readByte();
        if (readByte == 0) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList(readByte);
        d dVar = null;
        int i5 = 0;
        while (i5 < readByte) {
            switch (objectInput.readByte()) {
                case 120:
                    b10 = b(objectInput);
                    break;
                case 121:
                    b10 = a(objectInput);
                    break;
                case 122:
                    b10 = c(objectInput);
                    break;
                default:
                    b10 = (d) objectInput.readObject();
                    break;
            }
            if (dVar != null) {
                g gVar = (g) dVar;
                w0 b11 = gVar.b(2000);
                long j = gVar.f15361d;
                net.time4j.k kVar = net.time4j.m.E;
                w0 w0Var = (w0) b11.l(j, kVar);
                g gVar2 = (g) b10;
                int compareTo = w0Var.compareTo((w0) gVar2.b(2000).l(gVar2.f15361d, kVar));
                if (compareTo == 0) {
                    compareTo = dVar.f15362e.compareTo(b10.f15362e);
                }
                if (compareTo >= 0) {
                    throw new InvalidObjectException("Order of daylight saving rules is not ascending.");
                }
            }
            arrayList.add(b10);
            i5++;
            dVar = b10;
        }
        return arrayList;
    }

    public static int f(int i5) {
        int i6 = i5 / 3;
        if (i6 == 0) {
            return 0;
        }
        if (i6 == 1) {
            return 1800;
        }
        if (i6 != 2) {
            return i6 != 3 ? -1 : 7200;
        }
        return 3600;
    }

    public static List g(ObjectInput objectInput) {
        int i5;
        int i6;
        long readByte;
        int readInt = objectInput.readInt();
        if (readInt == 0) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList(readInt);
        int d6 = d(objectInput);
        long j = Long.MIN_VALUE;
        int i10 = d6;
        int i11 = 0;
        while (i11 < readInt) {
            byte readByte2 = objectInput.readByte();
            boolean z5 = readByte2 < 0;
            int i12 = (readByte2 >>> 5) & 3;
            switch ((readByte2 >>> 2) & 7) {
                case 1:
                    i5 = 0;
                    break;
                case 2:
                    i5 = 60;
                    break;
                case 3:
                    i5 = 3600;
                    break;
                case 4:
                    i5 = 7200;
                    break;
                case 5:
                    i5 = 10800;
                    break;
                case 6:
                    i5 = 14400;
                    break;
                case 7:
                    i5 = 18000;
                    break;
                default:
                    i5 = -1;
                    break;
            }
            if (i5 == -1) {
                i6 = i10;
                readByte = objectInput.readLong();
            } else {
                i6 = i10;
                readByte = ((((((((readByte2 & 3) << 16) | ((objectInput.readByte() & 255) << 8)) | (objectInput.readByte() & 255)) * 86400) - 4575744000L) + i5) - 7200) - d6;
            }
            if (readByte <= j) {
                throw new StreamCorruptedException("Wrong order of transitions.");
            }
            int d7 = i12 != 1 ? i12 != 2 ? i12 != 3 ? d(objectInput) : 7200 : 3600 : 0;
            if (z5) {
                d6 = d(objectInput);
            }
            int i13 = d6 + (d7 == Integer.MAX_VALUE ? 0 : d7);
            long j5 = readByte;
            arrayList.add(new net.time4j.tz.n(j5, i6, i13, d7));
            i11++;
            j = j5;
            i10 = i13;
        }
        return arrayList;
    }

    public static int h(g gVar) {
        int i5;
        ks.e eVar = gVar.f15362e;
        ks.d dVar = z0.W;
        u0 u0Var = (u0) eVar.e().f13685v.get(dVar);
        try {
            if (u0Var == null) {
                i5 = ((Integer) eVar.d(dVar)).intValue();
            } else {
                eVar.f();
                u0Var.getClass();
                i5 = u0Var.a((w0) eVar);
            }
        } catch (ks.f unused) {
            i5 = Integer.MIN_VALUE;
        }
        return q.A(gVar.f15361d * 86400) + i5;
    }

    public static void i(Object obj, ObjectOutput objectOutput) {
        int i5;
        c cVar = (c) obj;
        boolean l6 = l(cVar, objectOutput);
        objectOutput.writeByte(((cVar.f15359x << 3) | cVar.f15360y) & 255);
        boolean z5 = false;
        int i6 = cVar.E ? IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT : 0;
        int h6 = h(cVar);
        if (h6 % 1800 == 0) {
            i5 = i6 | (h6 / 1800);
            z5 = true;
        } else {
            i5 = i6 | 63;
        }
        objectOutput.writeByte(i5 & 255);
        if (!l6) {
            m(objectOutput, cVar.f15364v);
        }
        if (z5) {
            return;
        }
        objectOutput.writeInt(h6);
    }

    public static void j(Object obj, ObjectOutput objectOutput) {
        f fVar = (f) obj;
        boolean l6 = l(fVar, objectOutput);
        int i5 = 3;
        int i6 = fVar.f15365x << 3;
        int h6 = h(fVar);
        if (h6 == 0) {
            i5 = 1;
        } else if (h6 == 3600) {
            i5 = 2;
        } else if (h6 != 7200) {
            i5 = h6 != 10800 ? h6 != 79200 ? h6 != 82800 ? h6 != 86400 ? 0 : 7 : 6 : 5 : 4;
        }
        objectOutput.writeByte((i6 | i5) & 255);
        if (!l6) {
            m(objectOutput, fVar.f15364v);
        }
        if (i5 == 0) {
            objectOutput.writeInt(h6);
        }
    }

    public static void k(Object obj, ObjectOutput objectOutput) {
        int i5;
        boolean z5;
        h hVar = (h) obj;
        boolean l6 = l(hVar, objectOutput);
        int i6 = hVar.f15367x << 5;
        int h6 = h(hVar);
        if (h6 % 3600 == 0) {
            i5 = i6 | (h6 / 3600);
            z5 = true;
        } else {
            i5 = i6 | 31;
            z5 = false;
        }
        objectOutput.writeByte(i5 & 255);
        if (!l6) {
            m(objectOutput, hVar.f15364v);
        }
        if (z5) {
            return;
        }
        objectOutput.writeInt(h6);
    }

    public static boolean l(g gVar, DataOutput dataOutput) {
        int i5;
        int i6 = gVar.f15366w << 4;
        int ordinal = gVar.f15363i.ordinal();
        int i10 = gVar.f15364v;
        boolean z5 = true;
        if (i10 != 0) {
            if (i10 == 1800) {
                ordinal += 3;
            } else if (i10 == 3600) {
                ordinal += 6;
            } else {
                if (i10 != 7200) {
                    i5 = i6 | (ordinal + 12);
                    z5 = false;
                    dataOutput.writeByte(i5 & 255);
                    return z5;
                }
                ordinal += 9;
            }
        }
        i5 = i6 | ordinal;
        dataOutput.writeByte(i5 & 255);
        return z5;
    }

    public static void m(DataOutput dataOutput, int i5) {
        if (i5 % 900 == 0) {
            dataOutput.writeByte(i5 / 900);
        } else {
            dataOutput.writeByte(127);
            dataOutput.writeInt(i5);
        }
    }

    public static void n(List list, ObjectOutput objectOutput) {
        objectOutput.writeByte(list.size());
        Iterator it = list.iterator();
        while (it.hasNext()) {
            d dVar = (d) it.next();
            objectOutput.writeByte(dVar.a());
            switch (dVar.a()) {
                case 120:
                    j(dVar, objectOutput);
                    break;
                case 121:
                    i(dVar, objectOutput);
                    break;
                case 122:
                    k(dVar, objectOutput);
                    break;
                default:
                    objectOutput.writeObject(dVar);
                    break;
            }
        }
    }

    private Object readResolve() {
        return this.f15350d;
    }

    @Override // java.io.Externalizable
    public void readExternal(ObjectInput objectInput) {
        long readByte;
        Serializable bVar;
        switch (objectInput.readByte()) {
            case 120:
                this.f15350d = b(objectInput);
                return;
            case 121:
                this.f15350d = a(objectInput);
                return;
            case 122:
                this.f15350d = c(objectInput);
                return;
            case 123:
            case 124:
            default:
                throw new StreamCorruptedException("Unknown serialized type.");
            case 125:
                if ((objectInput.readByte() & 255) == 255) {
                    readByte = objectInput.readLong();
                } else {
                    readByte = ((((r0 << 16) + ((objectInput.readByte() & 255) << 8)) + (255 & objectInput.readByte())) * 900) - 4575744000L;
                }
                this.f15350d = new m(new net.time4j.tz.n(readByte, d(objectInput), d(objectInput), d(objectInput)), e(objectInput));
                return;
            case 126:
                this.f15350d = new a(g(objectInput));
                return;
            case Byte.MAX_VALUE:
                List g6 = g(objectInput);
                net.time4j.tz.m e9 = net.time4j.tz.m.e(((net.time4j.tz.n) g6.get(0)).d(), 0);
                List e10 = e(objectInput);
                int i5 = o.f15375d;
                int size = g6.size();
                if (size != 0) {
                    net.time4j.tz.m.e(((net.time4j.tz.n) g6.get(0)).d(), 0);
                    if (e10.isEmpty()) {
                        bVar = new a(g6);
                    } else {
                        net.time4j.tz.n nVar = (net.time4j.tz.n) g6.get(size - 1);
                        long c6 = 1 + nVar.c();
                        long a = o.a(1);
                        if (c6 < a) {
                            g6.addAll(m.d(nVar, e10, c6, a));
                        }
                        bVar = new b(size, g6, e10);
                    }
                } else if (e10.isEmpty()) {
                    bVar = new e(e9);
                } else {
                    int i6 = e9.f15347d;
                    bVar = new m(new net.time4j.tz.n(Long.MIN_VALUE, i6, i6, 0), e10);
                }
                this.f15350d = bVar;
                return;
        }
    }

    @Override // java.io.Externalizable
    public void writeExternal(ObjectOutput objectOutput) {
        int i5 = this.f15351e;
        objectOutput.writeByte(i5);
        switch (i5) {
            case 120:
                j(this.f15350d, objectOutput);
                return;
            case 121:
                i(this.f15350d, objectOutput);
                return;
            case 122:
                k(this.f15350d, objectOutput);
                return;
            case 123:
            case 124:
            default:
                throw new InvalidClassException("Unknown serialized type.");
            case 125:
                m mVar = (m) this.f15350d;
                net.time4j.tz.n nVar = mVar.f15370e;
                long c6 = nVar.c();
                if (c6 < -4575744000L || c6 >= 10464767099L || c6 % 900 != 0) {
                    objectOutput.writeByte(255);
                    objectOutput.writeLong(nVar.c());
                } else {
                    int i6 = (int) ((c6 - (-4575744000L)) / 900);
                    objectOutput.writeByte((i6 >>> 16) & 255);
                    objectOutput.writeByte((i6 >>> 8) & 255);
                    objectOutput.writeByte(i6 & 255);
                }
                m(objectOutput, nVar.d());
                m(objectOutput, nVar.f());
                m(objectOutput, nVar.b());
                n(mVar.f15371i, objectOutput);
                return;
            case 126:
                a aVar = (a) this.f15350d;
                aVar.c(aVar.f15352e.length, objectOutput);
                return;
            case 127:
                b bVar = (b) this.f15350d;
                bVar.f15356i.c(bVar.f15355e, objectOutput);
                n(bVar.f15357v.f15371i, objectOutput);
                return;
        }
    }

    public SPX(int i5, Serializable serializable) {
        this.f15350d = serializable;
        this.f15351e = i5;
    }
}
