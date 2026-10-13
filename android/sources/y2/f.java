package y2;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.Objects;

/* loaded from: classes.dex */
public final class f {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f20617b;

    /* renamed from: c, reason: collision with root package name */
    public final long f20618c;

    /* renamed from: d, reason: collision with root package name */
    public final long f20619d;

    public f(int i5, int i6, long j, long j5) {
        this.a = i5;
        this.f20617b = i6;
        this.f20618c = j;
        this.f20619d = j5;
    }

    public static f a(File file) {
        DataInputStream dataInputStream = new DataInputStream(new FileInputStream(file));
        try {
            f fVar = new f(dataInputStream.readInt(), dataInputStream.readInt(), dataInputStream.readLong(), dataInputStream.readLong());
            dataInputStream.close();
            return fVar;
        } finally {
        }
    }

    public final void b(File file) {
        file.delete();
        DataOutputStream dataOutputStream = new DataOutputStream(new FileOutputStream(file));
        try {
            dataOutputStream.writeInt(this.a);
            dataOutputStream.writeInt(this.f20617b);
            dataOutputStream.writeLong(this.f20618c);
            dataOutputStream.writeLong(this.f20619d);
            dataOutputStream.close();
        } catch (Throwable th2) {
            try {
                dataOutputStream.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && (obj instanceof f)) {
            f fVar = (f) obj;
            if (this.f20617b == fVar.f20617b && this.f20618c == fVar.f20618c && this.a == fVar.a && this.f20619d == fVar.f20619d) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return Objects.hash(Integer.valueOf(this.f20617b), Long.valueOf(this.f20618c), Integer.valueOf(this.a), Long.valueOf(this.f20619d));
    }
}
