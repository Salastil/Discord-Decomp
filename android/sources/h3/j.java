package h3;

import android.database.sqlite.SQLiteStatement;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class j extends i implements g3.d {

    /* renamed from: e, reason: collision with root package name */
    public final SQLiteStatement f9513e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public j(SQLiteStatement delegate) {
        super(delegate);
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        this.f9513e = delegate;
    }

    public final int c() {
        return this.f9513e.executeUpdateDelete();
    }
}
