package androidx.core.view;

import android.window.OnBackInvokedDispatcher;
import androidx.activity.ComponentActivity;
import androidx.activity.OnBackPressedDispatcher;
import androidx.lifecycle.LifecycleOwner;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final /* synthetic */ class m implements androidx.lifecycle.t {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1614d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1615e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f1616i;

    public /* synthetic */ m(int i5, Object obj, Object obj2) {
        this.f1614d = i5;
        this.f1615e = obj;
        this.f1616i = obj2;
    }

    @Override // androidx.lifecycle.t
    public final void c(LifecycleOwner lifecycleOwner, androidx.lifecycle.n event) {
        int i5 = this.f1614d;
        Object obj = this.f1616i;
        Object obj2 = this.f1615e;
        switch (i5) {
            case 0:
                MenuHostHelper menuHostHelper = (MenuHostHelper) obj2;
                MenuProvider menuProvider = (MenuProvider) obj;
                menuHostHelper.getClass();
                if (event == androidx.lifecycle.n.ON_DESTROY) {
                    menuHostHelper.a(menuProvider);
                    break;
                }
                break;
            default:
                OnBackPressedDispatcher onBackPressedDispatcher = (OnBackPressedDispatcher) obj2;
                ComponentActivity componentActivity = (ComponentActivity) obj;
                int i6 = ComponentActivity.f733d;
                Intrinsics.checkNotNullParameter(lifecycleOwner, "<anonymous parameter 0>");
                Intrinsics.checkNotNullParameter(event, "event");
                if (event == androidx.lifecycle.n.ON_CREATE) {
                    OnBackInvokedDispatcher invoker = e.e.b(componentActivity);
                    onBackPressedDispatcher.getClass();
                    Intrinsics.checkNotNullParameter(invoker, "invoker");
                    onBackPressedDispatcher.f743e = invoker;
                    onBackPressedDispatcher.e(onBackPressedDispatcher.f745g);
                    break;
                }
                break;
        }
    }
}
