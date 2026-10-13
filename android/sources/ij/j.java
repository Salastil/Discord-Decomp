package ij;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.FileInputStream;

/* loaded from: classes3.dex */
public abstract class j {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f10877b;

    public j(int i5, String str) {
        this.a = i5;
        this.f10877b = str;
    }

    public static int o(int i5, FileInputStream fileInputStream) {
        if ((i5 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
            return i5;
        }
        int i6 = i5 & 127;
        int i10 = 7;
        while (i10 < 32) {
            int read = fileInputStream.read();
            if (read == -1) {
                throw v.e();
            }
            i6 |= (read & 127) << i10;
            if ((read & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
                return i6;
            }
            i10 += 7;
        }
        while (i10 < 64) {
            int read2 = fileInputStream.read();
            if (read2 == -1) {
                throw v.e();
            }
            if ((read2 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0) {
                return i6;
            }
            i10 += 7;
        }
        throw v.c();
    }

    public abstract void a(int i5);

    public abstract int b();

    public abstract boolean c();

    public abstract void d(int i5);

    public abstract int e(int i5);

    public abstract boolean f();

    public abstract g g();

    public abstract double h();

    public abstract int i();

    public abstract int j();

    public abstract long k();

    public abstract float l();

    public abstract int m();

    public abstract long n();

    public abstract int p();

    public abstract long q();

    public abstract int r();

    public abstract long s();

    public abstract String t();

    public abstract String u();

    public abstract int v();

    public abstract int w();

    public abstract long x();

    public abstract boolean y(int i5);

    public void z() {
        int v5;
        do {
            v5 = v();
            if (v5 == 0) {
                return;
            }
            int i5 = this.a;
            if (i5 >= 100) {
                throw new v("Protocol message had too many levels of nesting.  May be malicious.  Use setRecursionLimit() to increase the recursion depth limit.");
            }
            this.a = i5 + 1;
            this.a--;
        } while (y(v5));
    }
}
