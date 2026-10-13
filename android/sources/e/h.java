package e;

import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import androidx.activity.ComponentActivity;
import androidx.activity.OnBackPressedDispatcher;
import androidx.lifecycle.v0;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class h extends Lambda implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7818d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ComponentActivity f7819e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ h(ComponentActivity componentActivity, int i5) {
        super(0);
        this.f7818d = i5;
        this.f7819e = componentActivity;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f7818d) {
            case 0:
                ComponentActivity componentActivity = this.f7819e;
                return new v0(componentActivity.getApplication(), componentActivity, componentActivity.getIntent() != null ? componentActivity.getIntent().getExtras() : null);
            case 1:
                this.f7819e.reportFullyDrawn();
                return Unit.a;
            default:
                ComponentActivity componentActivity2 = this.f7819e;
                OnBackPressedDispatcher onBackPressedDispatcher = new OnBackPressedDispatcher(new a(componentActivity2, 1));
                if (Build.VERSION.SDK_INT >= 33) {
                    if (Intrinsics.areEqual(Looper.myLooper(), Looper.getMainLooper())) {
                        componentActivity2.getLifecycle().a(new androidx.core.view.m(1, onBackPressedDispatcher, componentActivity2));
                    } else {
                        new Handler(Looper.getMainLooper()).post(new com.mkuczera.haptic.a(4, componentActivity2, onBackPressedDispatcher));
                    }
                }
                return onBackPressedDispatcher;
        }
    }
}
