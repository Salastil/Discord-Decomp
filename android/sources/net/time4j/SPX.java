package net.time4j;

import java.io.Externalizable;
import java.io.InvalidClassException;
import java.io.InvalidObjectException;
import java.io.ObjectInput;
import java.io.ObjectOutput;
import java.io.Serializable;
import java.io.StreamCorruptedException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes3.dex */
final class SPX implements Externalizable {
    private static final long serialVersionUID = 1;

    /* renamed from: d, reason: collision with root package name */
    public transient Serializable f15215d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15216e;

    public SPX() {
    }

    public static w0 a(ObjectInput objectInput, byte b10) {
        int readByte;
        int i5 = b10 & 15;
        byte readByte2 = objectInput.readByte();
        int i6 = (readByte2 >> 5) & 3;
        int i10 = readByte2 & 31;
        if (i6 == 1) {
            readByte = objectInput.readByte() + 1978;
        } else if (i6 == 2) {
            readByte = objectInput.readShort();
        } else {
            if (i6 != 3) {
                throw new StreamCorruptedException("Unknown year range.");
            }
            readByte = objectInput.readInt();
        }
        r0 b11 = r0.b(i5);
        w0 w0Var = w0.f15384v;
        return w0.z(readByte, b11.a(), i10, true);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r5v2, types: [int] */
    public static z0 b(ObjectInput objectInput) {
        int readInt;
        byte readByte = objectInput.readByte();
        if (readByte < 0) {
            return z0.x(~readByte);
        }
        int readByte2 = objectInput.readByte();
        byte b10 = 0;
        if (readByte2 < 0) {
            readByte2 = ~readByte2;
            readInt = 0;
        } else {
            byte readByte3 = objectInput.readByte();
            if (readByte3 < 0) {
                b10 = ~readByte3;
                readInt = 0;
            } else {
                readInt = objectInput.readInt();
                b10 = readByte3;
            }
        }
        return z0.y(readByte, readByte2, b10, readInt, true);
    }

    public static void c(w0 w0Var, int i5, ObjectOutput objectOutput) {
        int i6 = w0Var.f15388d;
        int i10 = (i6 < 1850 || i6 > 2100) ? Math.abs(i6) < 10000 ? 2 : 3 : 1;
        objectOutput.writeByte((i5 << 4) | w0Var.f15389e);
        objectOutput.writeByte(w0Var.f15390i | (i10 << 5));
        if (i10 == 1) {
            objectOutput.writeByte(i6 - 1978);
        } else if (i10 == 2) {
            objectOutput.writeShort(i6);
        } else {
            objectOutput.writeInt(i6);
        }
    }

    public static void d(z0 z0Var, ObjectOutput objectOutput) {
        int i5 = z0Var.f15414v;
        byte b10 = z0Var.f15413i;
        byte b11 = z0Var.f15411d;
        byte b12 = z0Var.f15412e;
        if (i5 != 0) {
            objectOutput.writeByte(b11);
            objectOutput.writeByte(b12);
            objectOutput.writeByte(b10);
            objectOutput.writeInt(z0Var.f15414v);
            return;
        }
        if (b10 != 0) {
            objectOutput.writeByte(b11);
            objectOutput.writeByte(b12);
            objectOutput.writeByte(~b10);
        } else if (b12 == 0) {
            objectOutput.writeByte(~b11);
        } else {
            objectOutput.writeByte(b11);
            objectOutput.writeByte(~b12);
        }
    }

    private Object readResolve() {
        return this.f15215d;
    }

    /* JADX WARN: Code restructure failed: missing block: B:131:0x01e4, code lost:
    
        if (r0[r8].b() == 1) goto L135;
     */
    @Override // java.io.Externalizable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void readExternal(ObjectInput objectInput) {
        n1 n1Var;
        n1 n1Var2;
        q0 q0Var;
        j0 j0Var;
        b0 b0Var;
        w wVar;
        byte readByte = objectInput.readByte();
        switch ((readByte & 255) >> 4) {
            case 1:
                this.f15215d = a(objectInput, readByte);
                return;
            case 2:
                this.f15215d = b(objectInput);
                return;
            case 3:
                byte readByte2 = objectInput.readByte();
                n1 d6 = n1.d(readByte2 >> 4);
                int i5 = readByte2 & 15;
                n1 n1Var3 = n1.f15294x;
                n1 n1Var4 = n1.f15295y;
                if ((readByte & 15) == 1) {
                    byte readByte3 = objectInput.readByte();
                    n1Var = n1.d(readByte3 >> 4);
                    n1Var2 = n1.d(readByte3 & 15);
                } else {
                    n1Var = n1Var3;
                    n1Var2 = n1Var4;
                }
                t1 t1Var = t1.G;
                this.f15215d = (d6 == n1.f15289d && i5 == 4 && n1Var == n1Var3 && n1Var2 == n1Var4) ? t1.G : new t1(d6, i5, n1Var, n1Var2);
                return;
            case 4:
                int i6 = readByte & 1;
                int i10 = (readByte & 2) >>> 1;
                boolean z5 = i6 != 0;
                boolean z6 = i10 != 0;
                q0 q0Var2 = q0.f15303w;
                long readLong = objectInput.readLong();
                int readInt = z6 ? objectInput.readInt() : 0;
                if (readLong == 0) {
                    if (z5) {
                        throw new InvalidObjectException("UTC epoch is no leap second.");
                    }
                    if (readInt == 0) {
                        q0Var = q0.F;
                        this.f15215d = q0Var;
                        return;
                    }
                }
                if (readLong == q0.f15301i && readInt == 0) {
                    if (z5) {
                        throw new InvalidObjectException("Minimum is no leap second.");
                    }
                    q0Var = q0.f15303w;
                } else if (readLong == q0.f15302v && readInt == 999999999) {
                    if (z5) {
                        throw new InvalidObjectException("Maximum is no leap second.");
                    }
                    q0Var = q0.f15304x;
                } else {
                    if (readInt >= 1000000000 || readInt < 0) {
                        throw new IllegalArgumentException(k0.d.i(readInt, "Nanosecond out of range: "));
                    }
                    if (z5) {
                        ns.c cVar = ns.c.F;
                        if (cVar.e()) {
                            long b10 = cVar.b(readLong) + 1;
                            if (b10 > 0) {
                                ns.b[] d7 = cVar.d();
                                while (true) {
                                    if (r8 < d7.length) {
                                        long d8 = d7[r8].d();
                                        if (d8 == b10) {
                                            break;
                                        } else if (d8 >= b10) {
                                            r8++;
                                        }
                                    }
                                }
                            }
                            long z7 = tn.g.z(readLong);
                            int i11 = (int) ((z7 >> 16) & 255);
                            int i12 = (int) (z7 & 255);
                            StringBuilder sb2 = new StringBuilder("Not registered as leap second event: ");
                            sb2.append((int) (z7 >> 32));
                            sb2.append("-");
                            sb2.append(i11 < 10 ? "0" : "");
                            sb2.append(i11);
                            sb2.append(i12 < 10 ? "0" : "");
                            sb2.append(i12);
                            sb2.append(" [Please check leap second configurations either of emitter vm or this target vm]");
                            throw new InvalidObjectException(sb2.toString());
                        }
                        readInt |= 1073741824;
                    }
                    q0Var = new q0(readInt, readLong);
                }
                this.f15215d = q0Var;
                return;
            case 5:
                int i13 = readByte & 1;
                ns.e eVar = ns.e.f15694d;
                ns.e eVar2 = ns.e.f15695e;
                ns.e eVar3 = i13 == 1 ? eVar2 : eVar;
                long readLong2 = objectInput.readLong();
                r8 = (readByte & 2) == 2 ? objectInput.readInt() : 0;
                if (eVar3 == eVar2) {
                    j0 j0Var2 = j0.f15259v;
                    j0Var = (readLong2 == 0 && r8 == 0) ? j0.f15260w : new j0(readLong2, r8, eVar2);
                } else {
                    j0 j0Var3 = j0.f15259v;
                    j0Var = (readLong2 == 0 && r8 == 0) ? j0.f15259v : new j0(readLong2, r8, eVar);
                }
                this.f15215d = j0Var;
                return;
            case 6:
                boolean z8 = (readByte & 15) == 1;
                int readInt2 = objectInput.readInt();
                if (readInt2 == 0) {
                    b0Var = b0.f15224y;
                } else {
                    ArrayList arrayList = new ArrayList(readInt2);
                    while (r8 < readInt2) {
                        arrayList.add(new ks.t(z8 ? objectInput.readLong() : objectInput.readInt(), (h0) objectInput.readObject()));
                        r8++;
                    }
                    b0Var = new b0(arrayList, objectInput.readBoolean());
                }
                this.f15215d = b0Var;
                return;
            case 7:
                boolean z10 = (readByte & 1) == 1;
                if ((readByte & 2) == 2) {
                    Map map = (Map) objectInput.readObject();
                    x xVar = x.f15391d;
                    if (map.isEmpty()) {
                        throw new IllegalArgumentException("Label map is empty.");
                    }
                    TreeMap treeMap = new TreeMap(map);
                    for (z0 z0Var : map.keySet()) {
                        if (z0Var.f15411d == 24) {
                            treeMap.put(z0.J, map.get(z0Var));
                            treeMap.remove(z0Var);
                        } else if (((String) map.get(z0Var)).isEmpty()) {
                            throw new IllegalArgumentException("Map has empty label: " + map);
                        }
                    }
                    wVar = new w(z10, new x(null, "", treeMap));
                } else {
                    String readUTF = objectInput.readUTF();
                    String readUTF2 = objectInput.readUTF();
                    int indexOf = readUTF.indexOf("-");
                    wVar = new w(z10, x.e(readUTF2, indexOf == -1 ? new Locale(readUTF) : new Locale(readUTF.substring(0, indexOf), readUTF.substring(indexOf + 1))));
                }
                this.f15215d = wVar;
                return;
            case 8:
                this.f15215d = new c1(a(objectInput, readByte), b(objectInput));
                return;
            default:
                throw new StreamCorruptedException("Unknown serialized type.");
        }
    }

    @Override // java.io.Externalizable
    public void writeExternal(ObjectOutput objectOutput) {
        boolean z5 = true;
        switch (this.f15216e) {
            case 1:
                c((w0) this.f15215d, 1, objectOutput);
                return;
            case 2:
                z0 z0Var = (z0) this.f15215d;
                objectOutput.writeByte(32);
                d(z0Var, objectOutput);
                return;
            case 3:
                t1 t1Var = (t1) this.f15215d;
                n1 n1Var = t1Var.f15327i;
                n1 n1Var2 = t1Var.f15328v;
                if (n1Var == n1.f15294x && n1Var2 == n1.f15295y) {
                    r1 = 1;
                }
                objectOutput.writeByte(r1 == 0 ? 49 : 48);
                objectOutput.writeByte((t1Var.f15325d.a() << 4) | t1Var.f15326e);
                if (r1 == 0) {
                    objectOutput.writeByte((t1Var.f15327i.a() << 4) | n1Var2.a());
                    return;
                }
                return;
            case 4:
                q0 q0Var = (q0) this.f15215d;
                int i5 = ((q0Var.f15307e >>> 30) != 0 ? 1 : 0) != 0 ? 65 : 64;
                int r5 = q0Var.r();
                if (r5 > 0) {
                    i5 |= 2;
                }
                objectOutput.writeByte(i5);
                objectOutput.writeLong(q0Var.f15306d);
                if (r5 > 0) {
                    objectOutput.writeInt(r5);
                    return;
                }
                return;
            case 5:
                j0 j0Var = (j0) j0.class.cast(this.f15215d);
                ns.e eVar = j0Var.f15263i;
                long j = j0Var.f15261d;
                int i6 = j0Var.f15262e;
                int i10 = eVar == ns.e.f15695e ? 81 : 80;
                if ((i6 < 0 ? i6 + 1000000000 : i6) == 0) {
                    objectOutput.writeByte(i10);
                    if (i6 < 0) {
                        j--;
                    }
                    objectOutput.writeLong(j);
                    return;
                }
                objectOutput.writeByte(i10 | 2);
                if (i6 < 0) {
                    j--;
                }
                objectOutput.writeLong(j);
                if (i6 < 0) {
                    i6 += 1000000000;
                }
                objectOutput.writeInt(i6);
                return;
            case 6:
                b0 b0Var = (b0) b0.class.cast(this.f15215d);
                List list = b0Var.f15225v;
                int size = list.size();
                int min = Math.min(size, 6);
                int i11 = 0;
                while (true) {
                    if (i11 >= min) {
                        z5 = false;
                    } else if (((ks.t) list.get(i11)).a() < 1000) {
                        i11++;
                    }
                }
                objectOutput.writeByte(z5 ? 97 : 96);
                objectOutput.writeInt(size);
                while (r1 < size) {
                    ks.t tVar = (ks.t) list.get(r1);
                    if (z5) {
                        objectOutput.writeLong(tVar.a());
                    } else {
                        objectOutput.writeInt((int) tVar.a());
                    }
                    objectOutput.writeObject(tVar.b());
                    r1++;
                }
                if (size > 0) {
                    objectOutput.writeBoolean(b0Var.f15226w);
                    return;
                }
                return;
            case 7:
                w wVar = (w) w.class.cast(this.f15215d);
                x xVar = wVar.f15383e;
                Locale locale = xVar.a;
                int i12 = wVar.f15382d ? 113 : 112;
                if (locale == null) {
                    i12 |= 2;
                }
                objectOutput.writeByte(i12);
                if (locale == null) {
                    objectOutput.writeObject(xVar.f15393c);
                    return;
                }
                String language = locale.getLanguage();
                if (!locale.getCountry().isEmpty()) {
                    StringBuilder p3 = k0.d.p(language, "-");
                    p3.append(locale.getCountry());
                    language = p3.toString();
                }
                objectOutput.writeUTF(language);
                objectOutput.writeUTF(xVar.f15392b);
                return;
            case 8:
                c1 c1Var = (c1) this.f15215d;
                c(c1Var.f15234d, 8, objectOutput);
                d(c1Var.f15235e, objectOutput);
                return;
            default:
                throw new InvalidClassException("Unknown serialized type.");
        }
    }

    public SPX(int i5, Serializable serializable) {
        this.f15215d = serializable;
        this.f15216e = i5;
    }
}
