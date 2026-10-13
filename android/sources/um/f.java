package um;

import android.content.Context;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class f {
    public String a;

    /* renamed from: b, reason: collision with root package name */
    public String f18958b;

    /* renamed from: c, reason: collision with root package name */
    public String f18959c;

    /* renamed from: d, reason: collision with root package name */
    public String f18960d;

    public final void a(Context context, String str, String str2, Function1 onResult) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(onResult, "onResult");
        this.a = str;
        this.f18958b = str2;
        if (Intrinsics.areEqual(str, this.f18959c) && Intrinsics.areEqual(str2, this.f18960d)) {
            onResult.invoke(c.a);
            return;
        }
        this.f18959c = str;
        this.f18960d = str2;
        if (str != null) {
            onResult.invoke(new b(jb.a.w(context, str)));
        } else if (str2 != null) {
            d9.a.D(context, str2, new com.discord.age_assurance.a(str2, this, onResult, 14));
        } else {
            onResult.invoke(new b(null));
        }
    }
}
