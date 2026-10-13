package com.discord.notifications.renderer;

import android.content.Context;
import android.os.Build;
import android.view.View;
import android.widget.TextView;
import com.discord.fonts.DiscordFont;
import com.discord.fonts.DiscordFontUtilsKt;
import com.discord.misc.utilities.activity.ActivityExtensionsKt;
import com.discord.misc.utilities.view.ViewBackgroundUtilsKt;
import com.discord.react_strings.I18nMessage;
import com.discord.react_strings.I18nUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.notifications.renderer.IncomingCallActivity$initView$1", f = "IncomingCallActivity.kt", l = {}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class IncomingCallActivity$initView$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    int label;
    final /* synthetic */ IncomingCallActivity this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public IncomingCallActivity$initView$1(IncomingCallActivity incomingCallActivity, Continuation continuation) {
        super(2, continuation);
        this.this$0 = incomingCallActivity;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new IncomingCallActivity$initView$1(this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        if (this.label != 0) {
            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
        }
        ki.b.R(obj);
        boolean booleanExtra = this.this$0.getIntent().getBooleanExtra(NotificationRenderer.IS_DM, false);
        String stringExtra = this.this$0.getIntent().getStringExtra(NotificationRenderer.CHANNEL_NAME);
        View contentView = ActivityExtensionsKt.getContentView(this.this$0);
        if (contentView == null) {
            return Unit.a;
        }
        contentView.setBackgroundColor(ThemeManagerKt.getTheme().getControlPrimaryBackgroundDefault());
        ViewBackgroundUtilsKt.setBackgroundDrawableRes(contentView, R.drawable.incoming_call_gradient);
        this.this$0.configureUser();
        TextView textView = (TextView) this.this$0.findViewById(R.id.textView);
        Context applicationContext = this.this$0.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext, "getApplicationContext(...)");
        textView.setText(I18nUtilsKt.i18nFormat$default(applicationContext, I18nMessage.INCOMING_CALL, null, 2, null));
        Intrinsics.checkNotNull(textView);
        DiscordFont discordFont = DiscordFont.PrimaryMedium;
        DiscordFontUtilsKt.setDiscordFont(textView, discordFont);
        Context applicationContext2 = this.this$0.getApplicationContext();
        Intrinsics.checkNotNullExpressionValue(applicationContext2, "getApplicationContext(...)");
        textView.setTextColor(ColorUtilsKt.getColorCompat(applicationContext2, com.discord.theme.R.color.primary_330));
        if (!booleanExtra) {
            TextView textView2 = (TextView) this.this$0.findViewById(R.id.channelName);
            textView2.setText(stringExtra);
            Intrinsics.checkNotNull(textView2);
            DiscordFontUtilsKt.setDiscordFont(textView2, discordFont);
            Context applicationContext3 = this.this$0.getApplicationContext();
            Intrinsics.checkNotNullExpressionValue(applicationContext3, "getApplicationContext(...)");
            textView2.setTextColor(ColorUtilsKt.getColorCompat(applicationContext3, com.discord.theme.R.color.primary_330));
        }
        if (Build.VERSION.SDK_INT >= 33) {
            this.this$0.configureActions();
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((IncomingCallActivity$initView$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
