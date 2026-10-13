package com.discord.chat.presentation.message.view;

import android.view.View;
import com.discord.chat.presentation.message.view.botuikit.react.ComponentContextDefaults;
import com.discord.chat.presentation.message.view.botuikit.react.TextDisplayComponentViewManager;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import kotlin.Unit;
import kotlin.jvm.functions.Function4;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function4 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3977d;

    public /* synthetic */ c(int i5) {
        this.f3977d = i5;
    }

    @Override // kotlin.jvm.functions.Function4
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4) {
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$8;
        Unit configureMessageContent$lambda$18$lambda$6;
        Unit spannable$lambda$3;
        Unit MARKDOWN_HANDLERS$lambda$5;
        Unit MEDIA_HANDLERS$lambda$16;
        Unit createTextDisplayComponentContext$lambda$5;
        switch (this.f3977d) {
            case 0:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$8 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$8((String) obj, (String) obj2, (String) obj3, (String) obj4);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$8;
            case 1:
                configureMessageContent$lambda$18$lambda$6 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$6((String) obj, (String) obj2, (String) obj3, (String) obj4);
                return configureMessageContent$lambda$18$lambda$6;
            case 2:
                spannable$lambda$3 = TextUtilsKt.toSpannable$lambda$3((String) obj, (String) obj2, (String) obj3, (String) obj4);
                return spannable$lambda$3;
            case 3:
                MARKDOWN_HANDLERS$lambda$5 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$5((String) obj, (String) obj2, (String) obj3, (String) obj4);
                return MARKDOWN_HANDLERS$lambda$5;
            case 4:
                MEDIA_HANDLERS$lambda$16 = ComponentContextDefaults.MEDIA_HANDLERS$lambda$16((View) obj, (String) obj2, ((Integer) obj3).intValue(), (Double) obj4);
                return MEDIA_HANDLERS$lambda$16;
            default:
                createTextDisplayComponentContext$lambda$5 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$5((String) obj, (String) obj2, (String) obj3, (String) obj4);
                return createTextDisplayComponentContext$lambda$5;
        }
    }
}
