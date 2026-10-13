package ok;

import android.graphics.drawable.Drawable;
import com.linecorp.apng.ApngDrawable;
import com.linecorp.apng.decoder.Apng;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends Drawable.ConstantState {
    public final Apng a;

    /* renamed from: b, reason: collision with root package name */
    public final int f16000b;

    /* renamed from: c, reason: collision with root package name */
    public final int f16001c;

    /* renamed from: d, reason: collision with root package name */
    public final int f16002d;

    /* renamed from: e, reason: collision with root package name */
    public final Function0 f16003e;

    public a(Apng apng, int i5, int i6, int i10, Function0 currentTimeProvider) {
        Intrinsics.checkNotNullParameter(apng, "apng");
        Intrinsics.checkNotNullParameter(currentTimeProvider, "currentTimeProvider");
        this.a = apng;
        this.f16000b = i5;
        this.f16001c = i6;
        this.f16002d = i10;
        this.f16003e = currentTimeProvider;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final int getChangingConfigurations() {
        return 0;
    }

    @Override // android.graphics.drawable.Drawable.ConstantState
    public final Drawable newDrawable() {
        return new ApngDrawable(new a(this));
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public a(a apngState) {
        this(apngState.a.copy(), apngState.f16000b, apngState.f16001c, apngState.f16002d, apngState.f16003e);
        Intrinsics.checkNotNullParameter(apngState, "apngState");
    }
}
