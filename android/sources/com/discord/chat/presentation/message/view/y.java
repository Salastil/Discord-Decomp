package com.discord.chat.presentation.message.view;

import android.graphics.drawable.Drawable;
import android.os.Handler;
import android.os.Looper;
import com.discord.chat.presentation.message.viewholder.ReactionsViewHolder;
import com.discord.crash_reporting.system_logs.SystemLogUtils;
import com.discord.reactions.ReactionView;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.defaults.DefaultTurboModuleManagerDelegate;
import com.margelo.nitro.rive.HybridViewModelColorProperty;
import java.util.LinkedList;
import java.util.List;
import jc.b0;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class y implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4071d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f4072e;

    public /* synthetic */ y(Function1 function1, int i5) {
        this.f4071d = i5;
        this.f4072e = function1;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit onObscureVerifyAgeClick$lambda$4;
        Unit bind$lambda$0;
        Unit bind$lambda$1;
        Unit fetchLastTombstone$lambda$0;
        List addCxxReactPackage$lambda$3$lambda$2;
        Unit addListener$lambda$0;
        switch (this.f4071d) {
            case 0:
                onObscureVerifyAgeClick$lambda$4 = SpoilerView.onObscureVerifyAgeClick$lambda$4(this.f4072e, ((Boolean) obj).booleanValue());
                return onObscureVerifyAgeClick$lambda$4;
            case 1:
                bind$lambda$0 = ReactionsViewHolder.bind$lambda$0(this.f4072e, (ReactionView.Reaction) obj);
                return bind$lambda$0;
            case 2:
                bind$lambda$1 = ReactionsViewHolder.bind$lambda$1(this.f4072e, (ReactionView.Reaction) obj);
                return bind$lambda$1;
            case 3:
                fetchLastTombstone$lambda$0 = SystemLogUtils.fetchLastTombstone$lambda$0(this.f4072e, (LinkedList) obj);
                return fetchLastTombstone$lambda$0;
            case 4:
                addCxxReactPackage$lambda$3$lambda$2 = DefaultTurboModuleManagerDelegate.Builder.addCxxReactPackage$lambda$3$lambda$2(this.f4072e, (ReactApplicationContext) obj);
                return addCxxReactPackage$lambda$3$lambda$2;
            case 5:
                addListener$lambda$0 = HybridViewModelColorProperty.addListener$lambda$0(this.f4072e, ((Integer) obj).intValue());
                return addListener$lambda$0;
            default:
                new Handler(Looper.getMainLooper()).post(new b0(23, this.f4072e, (Drawable) obj));
                return Unit.a;
        }
    }
}
