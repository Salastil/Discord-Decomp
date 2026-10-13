package com.discord.chat.bridge.spoiler;

import android.content.Context;
import com.discord.chat.bridge.spoiler.SpoilerAttributes;
import com.discord.chat.presentation.message.MessageViewAccessibilityDelegate;
import com.discord.notifications.renderer.utils.NotificationDataUtilsKt;
import com.discord.permissions.NativePermissionManagerModule$createMultiPromiseResolver$1;
import com.discord.react_strings.RenderContext;
import com.discord.socialrpc.SocialRpcSessionManager;
import com.facebook.react.bridge.Promise;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlinx.serialization.json.JsonObjectBuilder;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3864d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f3865e;

    public /* synthetic */ a(String str, int i5) {
        this.f3864d = i5;
        this.f3865e = str;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        String forItem$lambda$2$lambda$0;
        String forItem$lambda$2$lambda$1;
        String forItem$lambda$5$lambda$4;
        Unit referencedMessageLabel$lambda$0;
        Unit systemMessageUserJoin__NT_lnE$lambda$22$lambda$21;
        Unit missedCallText$lambda$33;
        Unit reject$lambda$11;
        Unit errorActivity$lambda$22$lambda$21;
        switch (this.f3864d) {
            case 0:
                forItem$lambda$2$lambda$0 = SpoilerAttributes.Companion.forItem$lambda$2$lambda$0(this.f3865e, (Context) obj);
                return forItem$lambda$2$lambda$0;
            case 1:
                forItem$lambda$2$lambda$1 = SpoilerAttributes.Companion.forItem$lambda$2$lambda$1(this.f3865e, (Context) obj);
                return forItem$lambda$2$lambda$1;
            case 2:
                forItem$lambda$5$lambda$4 = SpoilerAttributes.Companion.forItem$lambda$5$lambda$4(this.f3865e, (Context) obj);
                return forItem$lambda$5$lambda$4;
            case 3:
                referencedMessageLabel$lambda$0 = MessageViewAccessibilityDelegate.getReferencedMessageLabel$lambda$0(this.f3865e, (RenderContext) obj);
                return referencedMessageLabel$lambda$0;
            case 4:
                systemMessageUserJoin__NT_lnE$lambda$22$lambda$21 = NotificationDataUtilsKt.getSystemMessageUserJoin__NT_lnE$lambda$22$lambda$21(this.f3865e, (RenderContext) obj);
                return systemMessageUserJoin__NT_lnE$lambda$22$lambda$21;
            case 5:
                missedCallText$lambda$33 = NotificationDataUtilsKt.getMissedCallText$lambda$33(this.f3865e, (RenderContext) obj);
                return missedCallText$lambda$33;
            case 6:
                reject$lambda$11 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$11(this.f3865e, (Promise) obj);
                return reject$lambda$11;
            default:
                errorActivity$lambda$22$lambda$21 = SocialRpcSessionManager.errorActivity$lambda$22$lambda$21(this.f3865e, (JsonObjectBuilder) obj);
                return errorActivity$lambda$22$lambda$21;
        }
    }
}
