package e;

import androidx.activity.OnBackPressedDispatcher;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class p extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7822d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ OnBackPressedDispatcher f7823e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ p(OnBackPressedDispatcher onBackPressedDispatcher, int i5) {
        super(0);
        this.f7822d = i5;
        this.f7823e = onBackPressedDispatcher;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f7822d) {
            case 0:
                this.f7823e.d();
                break;
            case 1:
                this.f7823e.c();
                break;
            default:
                this.f7823e.d();
                break;
        }
        return Unit.a;
    }
}
