package com.facebook.react.devsupport;

import android.app.Activity;
import android.app.Dialog;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.FrameLayout;
import androidx.core.graphics.Insets;
import androidx.core.view.WindowInsetsCompat;
import androidx.core.view.j0;
import androidx.core.view.s0;
import com.facebook.react.R;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\b\u0000\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0012\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0014R\u0010\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lcom/facebook/react/devsupport/LogBoxDialog;", "Landroid/app/Dialog;", "context", "Landroid/app/Activity;", "reactRootView", "Landroid/view/View;", "<init>", "(Landroid/app/Activity;Landroid/view/View;)V", "onCreate", "", "savedInstanceState", "Landroid/os/Bundle;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class LogBoxDialog extends Dialog {
    private final View reactRootView;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public LogBoxDialog(@NotNull Activity context, View view) {
        super(context, R.style.Theme_Catalyst_LogBox);
        Intrinsics.checkNotNullParameter(context, "context");
        this.reactRootView = view;
        requestWindowFeature(1);
        if (view != null) {
            setContentView(view);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final WindowInsetsCompat onCreate$lambda$3$lambda$1(int i5, View view, WindowInsetsCompat windowInsets) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(windowInsets, "windowInsets");
        Insets f2 = windowInsets.a.f(i5);
        Intrinsics.checkNotNullExpressionValue(f2, "getInsets(...)");
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        Intrinsics.checkNotNull(layoutParams, "null cannot be cast to non-null type android.widget.FrameLayout.LayoutParams");
        ((FrameLayout.LayoutParams) layoutParams).setMargins(f2.a, f2.f1512b, f2.f1513c, f2.f1514d);
        return WindowInsetsCompat.f1547b;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final WindowInsetsCompat onCreate$lambda$3$lambda$2(Function2 function2, View p02, WindowInsetsCompat p12) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        return (WindowInsetsCompat) function2.invoke(p02, p12);
    }

    @Override // android.app.Dialog
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Window window = getWindow();
        if (window != null) {
            window.setBackgroundDrawable(new ColorDrawable(-16777216));
        }
        View view = this.reactRootView;
        if (view != null) {
            final com.discord.c cVar = new com.discord.c(14);
            androidx.core.view.r rVar = new androidx.core.view.r() { // from class: com.facebook.react.devsupport.q
                @Override // androidx.core.view.r
                public final WindowInsetsCompat a(View view2, WindowInsetsCompat windowInsetsCompat) {
                    WindowInsetsCompat onCreate$lambda$3$lambda$2;
                    onCreate$lambda$3$lambda$2 = LogBoxDialog.onCreate$lambda$3$lambda$2(com.discord.c.this, view2, windowInsetsCompat);
                    return onCreate$lambda$3$lambda$2;
                }
            };
            WeakHashMap weakHashMap = s0.a;
            j0.m(view, rVar);
        }
    }
}
