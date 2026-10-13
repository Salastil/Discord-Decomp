package h3;

import android.database.sqlite.SQLiteProgram;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class i implements g3.d {

    /* renamed from: d, reason: collision with root package name */
    public final SQLiteProgram f9512d;

    public i(SQLiteProgram delegate) {
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f9512d = delegate;
    }

    @Override // g3.d
    public final void F(byte[] value, int i5) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.f9512d.bindBlob(i5, value);
    }

    @Override // g3.d
    public final void S(int i5) {
        this.f9512d.bindNull(i5);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f9512d.close();
    }

    @Override // g3.d
    public final void n(int i5, String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.f9512d.bindString(i5, value);
    }

    @Override // g3.d
    public final void u(int i5, double d6) {
        this.f9512d.bindDouble(i5, d6);
    }

    @Override // g3.d
    public final void z(int i5, long j) {
        this.f9512d.bindLong(i5, j);
    }
}
