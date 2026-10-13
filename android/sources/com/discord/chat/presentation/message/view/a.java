package com.discord.chat.presentation.message.view;

import com.discord.chat.bridge.contentnode.LinkContentNode;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3973d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f3974e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f3975i;

    public /* synthetic */ a(Function2 function2, String str, int i5) {
        this.f3973d = i5;
        this.f3974e = function2;
        this.f3975i = str;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit configureHiddenContent_2dg2Uz0$lambda$24;
        Unit fields_KZKlO_o$lambda$29;
        Unit embed_Km7rQmo$lambda$6;
        Unit subtitleText_2dg2Uz0$lambda$8$lambda$7;
        Unit ephemeralIndication_AFFcxXc$lambda$7$lambda$5;
        Unit sharePrompt_LdU2QRA$lambda$16$lambda$15;
        Unit description_63A0Z80$lambda$12$lambda$11;
        Unit surveyIndication_u7_MRrM$lambda$3$lambda$1;
        switch (this.f3973d) {
            case 0:
                configureHiddenContent_2dg2Uz0$lambda$24 = ActivityRichPresenceInviteEmbedView.configureHiddenContent_2dg2Uz0$lambda$24(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return configureHiddenContent_2dg2Uz0$lambda$24;
            case 1:
                fields_KZKlO_o$lambda$29 = EmbedView.setFields_KZKlO_o$lambda$29(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return fields_KZKlO_o$lambda$29;
            case 2:
                embed_Km7rQmo$lambda$6 = EmbedView.setEmbed_Km7rQmo$lambda$6(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return embed_Km7rQmo$lambda$6;
            case 3:
                subtitleText_2dg2Uz0$lambda$8$lambda$7 = EmbeddedActivityInviteView.setSubtitleText_2dg2Uz0$lambda$8$lambda$7(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return subtitleText_2dg2Uz0$lambda$8$lambda$7;
            case 4:
                ephemeralIndication_AFFcxXc$lambda$7$lambda$5 = EphemeralIndicationView.setEphemeralIndication_AFFcxXc$lambda$7$lambda$5(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return ephemeralIndication_AFFcxXc$lambda$7$lambda$5;
            case 5:
                sharePrompt_LdU2QRA$lambda$16$lambda$15 = ForumPostActionBarView.setSharePrompt_LdU2QRA$lambda$16$lambda$15(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return sharePrompt_LdU2QRA$lambda$16$lambda$15;
            case 6:
                description_63A0Z80$lambda$12$lambda$11 = GuildEventInviteView.setDescription_63A0Z80$lambda$12$lambda$11(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return description_63A0Z80$lambda$12$lambda$11;
            default:
                surveyIndication_u7_MRrM$lambda$3$lambda$1 = SurveyIndicationView.setSurveyIndication_u7_MRrM$lambda$3$lambda$1(this.f3974e, this.f3975i, (LinkContentNode) obj);
                return surveyIndication_u7_MRrM$lambda$3$lambda$1;
        }
    }
}
