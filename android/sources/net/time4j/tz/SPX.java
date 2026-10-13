package net.time4j.tz;

import com.facebook.imageutils.JfifUtil;
import java.io.Externalizable;
import java.io.InvalidClassException;
import java.io.ObjectInput;
import java.io.ObjectOutput;
import java.io.Serializable;
import java.io.StreamCorruptedException;

/* loaded from: classes3.dex */
final class SPX implements Externalizable {
    private static final long serialVersionUID = -1000776907354520172L;

    /* renamed from: d, reason: collision with root package name */
    public transient Serializable f15332d;

    /* renamed from: e, reason: collision with root package name */
    public final transient int f15333e;

    public SPX() {
    }

    private Object readResolve() {
        return this.f15332d;
    }

    @Override // java.io.Externalizable
    public void readExternal(ObjectInput objectInput) {
        byte readByte = objectInput.readByte();
        switch ((readByte & 255) >> 4) {
            case 12:
                this.f15332d = new a((f) objectInput.readObject(), (i) objectInput.readObject());
                return;
            case 13:
                int i5 = readByte & 15;
                this.f15332d = k.a(f0.e.c(3)[i5 / 2], f0.e.c(2)[i5 % 2]);
                return;
            case 14:
                f fVar = (f) objectInput.readObject();
                j jVar = (j) objectInput.readObject();
                l lVar = i.f15337i;
                if ((readByte & 15) == 1) {
                    lVar = (l) objectInput.readObject();
                }
                this.f15332d = new b(fVar, jVar, lVar);
                return;
            case 15:
                this.f15332d = m.e(objectInput.readInt(), (readByte & 15) == 1 ? objectInput.readInt() : 0);
                return;
            default:
                throw new StreamCorruptedException("Unknown serialized type.");
        }
    }

    @Override // java.io.Externalizable
    public void writeExternal(ObjectOutput objectOutput) {
        boolean z5;
        switch (this.f15333e) {
            case 12:
                a aVar = (a) this.f15332d;
                objectOutput.writeByte(JfifUtil.MARKER_SOFn);
                objectOutput.writeObject(aVar.a());
                objectOutput.writeObject(aVar.d());
                return;
            case 13:
                k kVar = (k) this.f15332d;
                objectOutput.writeByte((f0.e.b(kVar.f15344e) + (f0.e.b(kVar.f15343d) * 2)) | JfifUtil.MARKER_RST0);
                return;
            case 14:
                b bVar = (b) this.f15332d;
                z5 = bVar.O != i.f15337i;
                objectOutput.writeByte(z5 ? JfifUtil.MARKER_APP1 : 224);
                objectOutput.writeObject(bVar.M);
                objectOutput.writeObject(bVar.N);
                if (z5) {
                    objectOutput.writeObject(bVar.O);
                    return;
                }
                return;
            case 15:
                m mVar = (m) this.f15332d;
                z5 = mVar.f15348e != 0;
                objectOutput.writeByte(z5 ? 241 : 240);
                objectOutput.writeInt(mVar.f15347d);
                if (z5) {
                    objectOutput.writeInt(mVar.f15348e);
                    return;
                }
                return;
            default:
                throw new InvalidClassException("Unknown serialized type.");
        }
    }

    public SPX(int i5, Serializable serializable) {
        this.f15332d = serializable;
        this.f15333e = i5;
    }
}
