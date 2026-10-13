package com.discord.chat.presentation.message.view;

import com.discord.chat.presentation.message.view.botuikit.react.ComponentContextDefaults;
import com.discord.chat.presentation.message.view.botuikit.react.TextDisplayComponentViewManager;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.primitives.UserId;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3976d;

    public /* synthetic */ b(int i5) {
        this.f3976d = i5;
    }

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$7;
        Unit configureMessageContent$lambda$18$lambda$5;
        Unit spannable$lambda$2;
        Unit COMPONENT_HANDLERS$lambda$24;
        Unit MARKDOWN_HANDLERS$lambda$4;
        Unit createTextDisplayComponentContext$lambda$4;
        switch (this.f3976d) {
            case 0:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$7 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$7((String) obj, (String) obj2, (String) obj3);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$7;
            case 1:
                configureMessageContent$lambda$18$lambda$5 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$5((String) obj, (String) obj2, (String) obj3);
                return configureMessageContent$lambda$18$lambda$5;
            case 2:
                spannable$lambda$2 = TextUtilsKt.toSpannable$lambda$2((String) obj, (String) obj2, (String) obj3);
                return spannable$lambda$2;
            case 3:
                COMPONENT_HANDLERS$lambda$24 = ComponentContextDefaults.COMPONENT_HANDLERS$lambda$24((UserId) obj, (String) obj2, (String) obj3);
                return COMPONENT_HANDLERS$lambda$24;
            case 4:
                MARKDOWN_HANDLERS$lambda$4 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$4((String) obj, (String) obj2, (String) obj3);
                return MARKDOWN_HANDLERS$lambda$4;
            default:
                createTextDisplayComponentContext$lambda$4 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$4((String) obj, (String) obj2, (String) obj3);
                return createTextDisplayComponentContext$lambda$4;
        }
    }
}
