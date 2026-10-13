package com.discord.mobile_voice_overlay;

import com.discord.mobile_voice_overlay.utils.OverlayViewProvider;
import com.discord.mobile_voice_overlay.views.OverlayDialog;
import com.discord.mobile_voice_overlay.views.OverlayMenuBubbleDialog;
import com.discord.mobile_voice_overlay.views.OverlayTrashWrap;
import com.discord.mobile_voice_overlay.views.OverlayVoiceBubble;
import com.discord.mobile_voice_overlay.views.OverlayVoiceSelectorBubbleDialog;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4285d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ MobileVoiceOverlay f4286e;

    public /* synthetic */ a(MobileVoiceOverlay mobileVoiceOverlay, int i5) {
        this.f4285d = i5;
        this.f4286e = mobileVoiceOverlay;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit onTrashVoiceBubble$lambda$26;
        OverlayVoiceBubble voiceBubbleProvider$lambda$9;
        OverlayTrashWrap trashWrapProvider$lambda$10;
        OverlayMenuBubbleDialog menuDialogProvider$lambda$14;
        OverlayVoiceSelectorBubbleDialog selectorDialogProvider$lambda$19;
        Unit menuDialogProvider$lambda$14$lambda$13$lambda$11;
        Unit selectorDialogProvider$lambda$19$lambda$18$lambda$16;
        switch (this.f4285d) {
            case 0:
                onTrashVoiceBubble$lambda$26 = MobileVoiceOverlay.onTrashVoiceBubble$lambda$26(this.f4286e, (OverlayVoiceBubble) obj);
                return onTrashVoiceBubble$lambda$26;
            case 1:
                voiceBubbleProvider$lambda$9 = MobileVoiceOverlay.voiceBubbleProvider$lambda$9(this.f4286e, (OverlayViewProvider) obj);
                return voiceBubbleProvider$lambda$9;
            case 2:
                trashWrapProvider$lambda$10 = MobileVoiceOverlay.trashWrapProvider$lambda$10(this.f4286e, (OverlayViewProvider) obj);
                return trashWrapProvider$lambda$10;
            case 3:
                menuDialogProvider$lambda$14 = MobileVoiceOverlay.menuDialogProvider$lambda$14(this.f4286e, (OverlayViewProvider) obj);
                return menuDialogProvider$lambda$14;
            case 4:
                selectorDialogProvider$lambda$19 = MobileVoiceOverlay.selectorDialogProvider$lambda$19(this.f4286e, (OverlayViewProvider) obj);
                return selectorDialogProvider$lambda$19;
            case 5:
                menuDialogProvider$lambda$14$lambda$13$lambda$11 = MobileVoiceOverlay.menuDialogProvider$lambda$14$lambda$13$lambda$11(this.f4286e, (OverlayDialog) obj);
                return menuDialogProvider$lambda$14$lambda$13$lambda$11;
            default:
                selectorDialogProvider$lambda$19$lambda$18$lambda$16 = MobileVoiceOverlay.selectorDialogProvider$lambda$19$lambda$18$lambda$16(this.f4286e, (String) obj);
                return selectorDialogProvider$lambda$19$lambda$18$lambda$16;
        }
    }
}
