package io.sentry.vendor.gson.stream;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.Closeable;
import java.io.Flushable;
import java.io.IOException;
import java.io.Writer;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class c implements Closeable, Flushable {
    public static final String[] F = new String[IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT];
    public final boolean E;

    /* renamed from: d, reason: collision with root package name */
    public final Writer f12060d;

    /* renamed from: e, reason: collision with root package name */
    public int[] f12061e;

    /* renamed from: i, reason: collision with root package name */
    public int f12062i;

    /* renamed from: v, reason: collision with root package name */
    public String f12063v;

    /* renamed from: w, reason: collision with root package name */
    public String f12064w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f12065x;

    /* renamed from: y, reason: collision with root package name */
    public String f12066y;

    static {
        for (int i5 = 0; i5 <= 31; i5++) {
            F[i5] = String.format("\\u%04x", Integer.valueOf(i5));
        }
        String[] strArr = F;
        strArr[34] = "\\\"";
        strArr[92] = "\\\\";
        strArr[9] = "\\t";
        strArr[8] = "\\b";
        strArr[10] = "\\n";
        strArr[13] = "\\r";
        strArr[12] = "\\f";
        String[] strArr2 = (String[]) strArr.clone();
        strArr2[60] = "\\u003c";
        strArr2[62] = "\\u003e";
        strArr2[38] = "\\u0026";
        strArr2[61] = "\\u003d";
        strArr2[39] = "\\u0027";
    }

    public c(Writer writer) {
        int[] iArr = new int[32];
        this.f12061e = iArr;
        this.f12062i = 0;
        if (iArr.length == 0) {
            this.f12061e = Arrays.copyOf(iArr, 0);
        }
        int[] iArr2 = this.f12061e;
        int i5 = this.f12062i;
        this.f12062i = i5 + 1;
        iArr2[i5] = 6;
        this.f12064w = ":";
        this.E = true;
        this.f12060d = writer;
    }

    public final void c() {
        int l6 = l();
        if (l6 == 1) {
            this.f12061e[this.f12062i - 1] = 2;
            g();
            return;
        }
        Writer writer = this.f12060d;
        if (l6 == 2) {
            writer.append(',');
            g();
        } else {
            if (l6 == 4) {
                writer.append((CharSequence) this.f12064w);
                this.f12061e[this.f12062i - 1] = 5;
                return;
            }
            if (l6 != 6) {
                if (l6 != 7) {
                    throw new IllegalStateException("Nesting problem.");
                }
                if (!this.f12065x) {
                    throw new IllegalStateException("JSON must have only one top-level value.");
                }
            }
            this.f12061e[this.f12062i - 1] = 7;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f12060d.close();
        int i5 = this.f12062i;
        if (i5 > 1 || (i5 == 1 && this.f12061e[i5 - 1] != 7)) {
            throw new IOException("Incomplete document");
        }
        this.f12062i = 0;
    }

    public final void f(char c6, int i5, int i6) {
        int l6 = l();
        if (l6 != i6 && l6 != i5) {
            throw new IllegalStateException("Nesting problem.");
        }
        if (this.f12066y != null) {
            throw new IllegalStateException("Dangling name: " + this.f12066y);
        }
        this.f12062i--;
        if (l6 == i6) {
            g();
        }
        this.f12060d.write(c6);
    }

    @Override // java.io.Flushable
    public final void flush() {
        if (this.f12062i == 0) {
            throw new IllegalStateException("JsonWriter is closed.");
        }
        this.f12060d.flush();
    }

    public final void g() {
        if (this.f12063v == null) {
            return;
        }
        Writer writer = this.f12060d;
        writer.write(10);
        int i5 = this.f12062i;
        for (int i6 = 1; i6 < i5; i6++) {
            writer.write(this.f12063v);
        }
    }

    public final void i() {
        if (this.f12066y != null) {
            if (!this.E) {
                this.f12066y = null;
                return;
            }
            q();
        }
        c();
        this.f12060d.write("null");
    }

    public final int l() {
        int i5 = this.f12062i;
        if (i5 != 0) {
            return this.f12061e[i5 - 1];
        }
        throw new IllegalStateException("JsonWriter is closed.");
    }

    /* JADX WARN: Removed duplicated region for block: B:8:0x002d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void o(String str) {
        int i5;
        String str2;
        Writer writer = this.f12060d;
        writer.write(34);
        int length = str.length();
        int i6 = 0;
        while (i5 < length) {
            char charAt = str.charAt(i5);
            if (charAt < 128) {
                str2 = F[charAt];
                i5 = str2 == null ? i5 + 1 : 0;
                if (i6 < i5) {
                    writer.write(str, i6, i5 - i6);
                }
                writer.write(str2);
                i6 = i5 + 1;
            } else {
                if (charAt == 8232) {
                    str2 = "\\u2028";
                } else if (charAt == 8233) {
                    str2 = "\\u2029";
                }
                if (i6 < i5) {
                }
                writer.write(str2);
                i6 = i5 + 1;
            }
        }
        if (i6 < length) {
            writer.write(str, i6, length - i6);
        }
        writer.write(34);
    }

    public final void q() {
        if (this.f12066y != null) {
            int l6 = l();
            if (l6 == 5) {
                this.f12060d.write(44);
            } else if (l6 != 3) {
                throw new IllegalStateException("Nesting problem.");
            }
            g();
            this.f12061e[this.f12062i - 1] = 4;
            o(this.f12066y);
            this.f12066y = null;
        }
    }
}
