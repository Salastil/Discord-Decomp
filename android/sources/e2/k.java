package e2;

import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.BufferedSink;

/* loaded from: classes.dex */
public final class k extends OutputStream {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7855d;

    /* renamed from: e, reason: collision with root package name */
    public final Object f7856e;

    public /* synthetic */ k(BufferedSink bufferedSink, int i5) {
        this.f7855d = i5;
        this.f7856e = bufferedSink;
    }

    @Override // java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        switch (this.f7855d) {
            case 0:
            case 1:
                break;
            default:
                ((et.q) this.f7856e).close();
                break;
        }
    }

    @Override // java.io.OutputStream, java.io.Flushable
    public final void flush() {
        switch (this.f7855d) {
            case 0:
                ((FileOutputStream) this.f7856e).flush();
                break;
            case 1:
                break;
            default:
                et.q qVar = (et.q) this.f7856e;
                if (!qVar.f8271i) {
                    qVar.flush();
                    break;
                }
                break;
        }
    }

    public String toString() {
        switch (this.f7855d) {
            case 1:
                return ((Buffer) this.f7856e) + ".outputStream()";
            case 2:
                return ((et.q) this.f7856e) + ".outputStream()";
            default:
                return super.toString();
        }
    }

    @Override // java.io.OutputStream
    public final void write(int i5) {
        switch (this.f7855d) {
            case 0:
                ((FileOutputStream) this.f7856e).write(i5);
                return;
            case 1:
                ((Buffer) this.f7856e).U(i5);
                return;
            default:
                et.q qVar = (et.q) this.f7856e;
                if (qVar.f8271i) {
                    throw new IOException("closed");
                }
                qVar.f8270e.U((byte) i5);
                qVar.c();
                return;
        }
    }

    public k(FileOutputStream fileOutputStream) {
        this.f7855d = 0;
        Intrinsics.checkNotNullParameter(fileOutputStream, "fileOutputStream");
        this.f7856e = fileOutputStream;
    }

    @Override // java.io.OutputStream
    public final void write(byte[] bytes, int i5, int i6) {
        switch (this.f7855d) {
            case 0:
                Intrinsics.checkNotNullParameter(bytes, "bytes");
                ((FileOutputStream) this.f7856e).write(bytes, i5, i6);
                return;
            case 1:
                Intrinsics.checkNotNullParameter(bytes, "data");
                ((Buffer) this.f7856e).m1302write(bytes, i5, i6);
                return;
            default:
                Intrinsics.checkNotNullParameter(bytes, "data");
                et.q qVar = (et.q) this.f7856e;
                if (!qVar.f8271i) {
                    qVar.f8270e.m1302write(bytes, i5, i6);
                    qVar.c();
                    return;
                }
                throw new IOException("closed");
        }
    }

    @Override // java.io.OutputStream
    public void write(byte[] b10) {
        switch (this.f7855d) {
            case 0:
                Intrinsics.checkNotNullParameter(b10, "b");
                ((FileOutputStream) this.f7856e).write(b10);
                break;
            default:
                super.write(b10);
                break;
        }
    }

    private final void c() {
    }

    private final void f() {
    }

    private final void g() {
    }
}
