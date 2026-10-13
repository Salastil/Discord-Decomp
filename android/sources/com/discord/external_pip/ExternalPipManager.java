package com.discord.external_pip;

import android.app.Activity;
import android.app.PictureInPictureParams;
import android.os.Build;
import android.util.Rational;
import android.view.View;
import android.view.Window;
import androidx.core.view.x;
import com.discord.chat.presentation.textutils.c;
import com.facebook.react.uimanager.ViewProps;
import fo.q;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0000\u0018\u0000 \u001f2\u00020\u0001:\u0001\u001fB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u0019\u0010\u0007\u001a\u00020\u00062\b\u0010\u0005\u001a\u0004\u0018\u00010\u0004H\u0002¢\u0006\u0004\b\u0007\u0010\bJ\u0015\u0010\u000b\u001a\u00020\u00062\u0006\u0010\n\u001a\u00020\t¢\u0006\u0004\b\u000b\u0010\fJ\u0017\u0010\u000e\u001a\u00020\t2\b\b\u0002\u0010\r\u001a\u00020\t¢\u0006\u0004\b\u000e\u0010\u000fJ'\u0010\u0013\u001a\u00020\u00062\b\u0010\u0005\u001a\u0004\u0018\u00010\u00042\u0006\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\u0010¢\u0006\u0004\b\u0013\u0010\u0014J\u0019\u0010\u0015\u001a\u00020\u00062\b\u0010\u0005\u001a\u0004\u0018\u00010\u0004H\u0007¢\u0006\u0004\b\u0015\u0010\bJ=\u0010\u0019\u001a\u00020\u00062\b\u0010\u0005\u001a\u0004\u0018\u00010\u00042\b\b\u0002\u0010\r\u001a\u00020\t2\u001a\b\u0002\u0010\u0018\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00060\u0017\u0012\u0004\u0012\u00020\u00060\u0016¢\u0006\u0004\b\u0019\u0010\u001aR\u0016\u0010\n\u001a\u00020\t8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\n\u0010\u001bR\u0016\u0010\u001d\u001a\u00020\u001c8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u001d\u0010\u001e¨\u0006 "}, d2 = {"Lcom/discord/external_pip/ExternalPipManager;", "", "<init>", "()V", "Landroid/app/Activity;", "activity", "", "refreshPipMode", "(Landroid/app/Activity;)V", "", ViewProps.ENABLED, "setEnabled", "(Z)V", "force", "getEnabled", "(Z)Z", "", "numerator", "denominator", "setPipAspectRatio", "(Landroid/app/Activity;II)V", "refreshPipUi", "Lkotlin/Function1;", "Lkotlin/Result;", "onResult", "enterPipMode", "(Landroid/app/Activity;ZLkotlin/jvm/functions/Function1;)V", "Z", "Landroid/util/Rational;", ViewProps.ASPECT_RATIO, "Landroid/util/Rational;", "Companion", "external_pip_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ExternalPipManager {
    private static final boolean CAN_PIP;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private Rational aspectRatio = new Rational(1, 1);
    private boolean enabled;

    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0014\u0010\u0006\u001a\u00020\u0007*\u00020\u00072\u0006\u0010\b\u001a\u00020\u0005H\u0002J\b\u0010\t\u001a\u00020\u0005H\u0007R\u0010\u0010\u0004\u001a\u00020\u00058\u0002X\u0083\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lcom/discord/external_pip/ExternalPipManager$Companion;", "", "<init>", "()V", "CAN_PIP", "", "setSeamlessResizeEnabledCompat", "Landroid/app/PictureInPictureParams$Builder;", ViewProps.ENABLED, "isSupported", "external_pip_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final PictureInPictureParams.Builder setSeamlessResizeEnabledCompat(PictureInPictureParams.Builder builder, boolean z5) {
            if (isSupported()) {
                builder = builder.setSeamlessResizeEnabled(z5);
            }
            Intrinsics.checkNotNull(builder);
            return builder;
        }

        public final boolean isSupported() {
            return Build.VERSION.SDK_INT >= 31;
        }

        private Companion() {
        }
    }

    static {
        CAN_PIP = Build.VERSION.SDK_INT >= 26;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public static /* synthetic */ void enterPipMode$default(ExternalPipManager externalPipManager, Activity activity, boolean z5, Function1 function1, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            z5 = false;
        }
        if ((i5 & 4) != 0) {
            function1 = new c(18);
        }
        externalPipManager.enterPipMode(activity, z5, function1);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit enterPipMode$lambda$1(Result result) {
        return Unit.a;
    }

    public static /* synthetic */ boolean getEnabled$default(ExternalPipManager externalPipManager, boolean z5, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            z5 = false;
        }
        return externalPipManager.getEnabled(z5);
    }

    private final void refreshPipMode(Activity activity) {
        if (CAN_PIP && activity != null && activity.isInPictureInPictureMode()) {
            enterPipMode$default(this, activity, false, null, 6, null);
        }
    }

    public final void enterPipMode(Activity activity, boolean force, @NotNull Function1<? super Result, Unit> onResult) {
        Boolean valueOf;
        Intrinsics.checkNotNullParameter(onResult, "onResult");
        if ((!this.enabled && !force) || !CAN_PIP) {
            q qVar = Result.f13476e;
            onResult.invoke(new Result(b.i(new Exception("Disabled or unsupported."))));
            return;
        }
        if (activity != null) {
            try {
                Companion companion = INSTANCE;
                PictureInPictureParams.Builder aspectRatio = new PictureInPictureParams.Builder().setAspectRatio(this.aspectRatio);
                Intrinsics.checkNotNullExpressionValue(aspectRatio, "setAspectRatio(...)");
                valueOf = Boolean.valueOf(activity.enterPictureInPictureMode(companion.setSeamlessResizeEnabledCompat(aspectRatio, false).build()));
            } catch (Exception e9) {
                q qVar2 = Result.f13476e;
                onResult.invoke(new Result(b.i(e9)));
                return;
            }
        } else {
            valueOf = null;
        }
        if (Intrinsics.areEqual(valueOf, Boolean.TRUE)) {
            q qVar3 = Result.f13476e;
            onResult.invoke(new Result(Unit.a));
        } else {
            q qVar4 = Result.f13476e;
            onResult.invoke(new Result(b.i(new Exception("Unable to enter picture in picture mode."))));
        }
    }

    public final boolean getEnabled(boolean force) {
        return (this.enabled || force) && CAN_PIP;
    }

    public final void refreshPipUi(Activity activity) {
        if (CAN_PIP && activity != null && activity.isInPictureInPictureMode()) {
            try {
                Companion companion = INSTANCE;
                PictureInPictureParams.Builder aspectRatio = new PictureInPictureParams.Builder().setAspectRatio(this.aspectRatio);
                Intrinsics.checkNotNullExpressionValue(aspectRatio, "setAspectRatio(...)");
                activity.setPictureInPictureParams(companion.setSeamlessResizeEnabledCompat(aspectRatio, false).build());
            } catch (Exception unused) {
            }
            Window window = activity.getWindow();
            View decorView = window != null ? window.getDecorView() : null;
            if (decorView != null) {
                decorView.post(new x(3, decorView));
            }
        }
    }

    public final void setEnabled(boolean enabled) {
        this.enabled = enabled;
    }

    public final void setPipAspectRatio(Activity activity, int numerator, int denominator) {
        Rational rational = new Rational(numerator, denominator);
        if (Intrinsics.areEqual(this.aspectRatio, rational)) {
            return;
        }
        this.aspectRatio = rational;
        refreshPipMode(activity);
    }
}
