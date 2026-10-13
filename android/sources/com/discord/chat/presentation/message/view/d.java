package com.discord.chat.presentation.message.view;

import com.discord.chat.presentation.message.view.botuikit.react.ComponentContextDefaults;
import com.discord.chat.presentation.message.view.polls.PollAnswerAdapter;
import com.discord.chat.presentation.textutils.TextUtilsKt;
import com.discord.chat.reactevents.ViewResizeMode;
import kotlin.Unit;
import kotlin.jvm.functions.Function6;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Function6 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3978d;

    public /* synthetic */ d(int i5) {
        this.f3978d = i5;
    }

    @Override // kotlin.jvm.functions.Function6
    public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6) {
        Unit activityRichPresenceInviteEmbed_Uv5W4H4$lambda$11;
        Unit configureMessageContent$lambda$18$lambda$9;
        Unit onLongPressImage$lambda$1;
        Unit spannable$lambda$6;
        Unit MARKDOWN_HANDLERS$lambda$8;
        switch (this.f3978d) {
            case 0:
                activityRichPresenceInviteEmbed_Uv5W4H4$lambda$11 = ActivityRichPresenceInviteEmbedView.setActivityRichPresenceInviteEmbed_Uv5W4H4$lambda$11((String) obj, (String) obj2, (String) obj3, (String) obj4, (String) obj5, (String) obj6);
                return activityRichPresenceInviteEmbed_Uv5W4H4$lambda$11;
            case 1:
                configureMessageContent$lambda$18$lambda$9 = FlaggedMessageEmbedView.configureMessageContent$lambda$18$lambda$9((String) obj, (String) obj2, (String) obj3, (String) obj4, (String) obj5, (String) obj6);
                return configureMessageContent$lambda$18$lambda$9;
            case 2:
                onLongPressImage$lambda$1 = PollAnswerAdapter.onLongPressImage$lambda$1((String) obj, ((Integer) obj2).intValue(), ((Integer) obj3).intValue(), ((Integer) obj4).intValue(), ((Integer) obj5).intValue(), (ViewResizeMode) obj6);
                return onLongPressImage$lambda$1;
            case 3:
                spannable$lambda$6 = TextUtilsKt.toSpannable$lambda$6((String) obj, (String) obj2, (String) obj3, (String) obj4, (String) obj5, (String) obj6);
                return spannable$lambda$6;
            case 4:
                MARKDOWN_HANDLERS$lambda$8 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$8((String) obj, (String) obj2, (String) obj3, (String) obj4, (String) obj5, (String) obj6);
                return MARKDOWN_HANDLERS$lambda$8;
            default:
                ((Integer) obj).intValue();
                ((Integer) obj2).intValue();
                ((Double) obj3).doubleValue();
                ((Double) obj4).doubleValue();
                ((Double) obj5).doubleValue();
                ((Double) obj6).doubleValue();
                return Unit.a;
        }
    }
}
