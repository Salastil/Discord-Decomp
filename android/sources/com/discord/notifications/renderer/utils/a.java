package com.discord.notifications.renderer.utils;

import com.discord.notifications.api.NotificationData;
import com.discord.react_strings.RenderContext;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4323d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ NotificationData f4324e;

    public /* synthetic */ a(NotificationData notificationData, int i5) {
        this.f4323d = i5;
        this.f4324e = notificationData;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit title$lambda$0;
        Unit renderMessageContent$lambda$8;
        Unit renderMessageContent$lambda$9;
        Unit renderMessageContent$lambda$10;
        Unit renderMessageContent$lambda$13;
        Unit content$lambda$14;
        Unit content$lambda$15;
        Unit content$lambda$16;
        Unit content$lambda$17;
        Unit content$lambda$18;
        Unit title$lambda$1;
        Unit content$lambda$19;
        Unit content$lambda$20;
        Unit botDMMuteAction$lambda$28;
        Unit title$lambda$2;
        Unit title$lambda$3;
        Unit title$lambda$4;
        Unit title$lambda$5;
        Unit renderMessageContent$lambda$7;
        switch (this.f4323d) {
            case 0:
                title$lambda$0 = NotificationDataUtilsKt.getTitle$lambda$0(this.f4324e, (RenderContext) obj);
                return title$lambda$0;
            case 1:
                renderMessageContent$lambda$8 = NotificationDataUtilsKt.renderMessageContent$lambda$8(this.f4324e, (RenderContext) obj);
                return renderMessageContent$lambda$8;
            case 2:
                renderMessageContent$lambda$9 = NotificationDataUtilsKt.renderMessageContent$lambda$9(this.f4324e, (RenderContext) obj);
                return renderMessageContent$lambda$9;
            case 3:
                renderMessageContent$lambda$10 = NotificationDataUtilsKt.renderMessageContent$lambda$10(this.f4324e, (RenderContext) obj);
                return renderMessageContent$lambda$10;
            case 4:
                renderMessageContent$lambda$13 = NotificationDataUtilsKt.renderMessageContent$lambda$13(this.f4324e, (RenderContext) obj);
                return renderMessageContent$lambda$13;
            case 5:
                content$lambda$14 = NotificationDataUtilsKt.getContent$lambda$14(this.f4324e, (RenderContext) obj);
                return content$lambda$14;
            case 6:
                content$lambda$15 = NotificationDataUtilsKt.getContent$lambda$15(this.f4324e, (RenderContext) obj);
                return content$lambda$15;
            case 7:
                content$lambda$16 = NotificationDataUtilsKt.getContent$lambda$16(this.f4324e, (RenderContext) obj);
                return content$lambda$16;
            case 8:
                content$lambda$17 = NotificationDataUtilsKt.getContent$lambda$17(this.f4324e, (RenderContext) obj);
                return content$lambda$17;
            case 9:
                content$lambda$18 = NotificationDataUtilsKt.getContent$lambda$18(this.f4324e, (RenderContext) obj);
                return content$lambda$18;
            case 10:
                title$lambda$1 = NotificationDataUtilsKt.getTitle$lambda$1(this.f4324e, (RenderContext) obj);
                return title$lambda$1;
            case 11:
                content$lambda$19 = NotificationDataUtilsKt.getContent$lambda$19(this.f4324e, (RenderContext) obj);
                return content$lambda$19;
            case 12:
                content$lambda$20 = NotificationDataUtilsKt.getContent$lambda$20(this.f4324e, (RenderContext) obj);
                return content$lambda$20;
            case 13:
                botDMMuteAction$lambda$28 = NotificationDataUtilsKt.getBotDMMuteAction$lambda$28(this.f4324e, (RenderContext) obj);
                return botDMMuteAction$lambda$28;
            case 14:
                title$lambda$2 = NotificationDataUtilsKt.getTitle$lambda$2(this.f4324e, (RenderContext) obj);
                return title$lambda$2;
            case 15:
                title$lambda$3 = NotificationDataUtilsKt.getTitle$lambda$3(this.f4324e, (RenderContext) obj);
                return title$lambda$3;
            case 16:
                title$lambda$4 = NotificationDataUtilsKt.getTitle$lambda$4(this.f4324e, (RenderContext) obj);
                return title$lambda$4;
            case 17:
                title$lambda$5 = NotificationDataUtilsKt.getTitle$lambda$5(this.f4324e, (RenderContext) obj);
                return title$lambda$5;
            default:
                renderMessageContent$lambda$7 = NotificationDataUtilsKt.renderMessageContent$lambda$7(this.f4324e, (RenderContext) obj);
                return renderMessageContent$lambda$7;
        }
    }
}
