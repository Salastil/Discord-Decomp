package com.discord.chat.presentation.message.view.botuikit.components;

import android.content.res.ColorStateList;
import com.discord.chat.bridge.botuikit.ButtonComponent;
import com.discord.chat.bridge.botuikit.ButtonStyle;
import com.discord.misc.utilities.view.ButtonBackgroundUtilsKt;
import com.discord.theme.ThemeManagerKt;
import com.discord.theme.utils.ColorUtilsKt;
import com.facebook.react.uimanager.ViewProps;
import com.google.android.material.button.MaterialButton;
import kotlin.Metadata;

@Metadata(d1 = {"\u0000 \n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\u001a\f\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0002\u001a\f\u0010\u0003\u001a\u00020\u0001*\u00020\u0002H\u0002\u001a \u0010\u0004\u001a\u00020\u0005*\u00020\u00062\b\b\u0001\u0010\u0007\u001a\u00020\b2\b\b\u0001\u0010\t\u001a\u00020\bH\u0002\u001a\f\u0010\n\u001a\u00020\u0005*\u00020\u0006H\u0002\u001a\f\u0010\u000b\u001a\u00020\u0005*\u00020\u0006H\u0002\u001a\f\u0010\f\u001a\u00020\u0005*\u00020\u0006H\u0002\u001a\f\u0010\r\u001a\u00020\u0005*\u00020\u0006H\u0002¨\u0006\u000e"}, d2 = {"hasEmoji", "", "Lcom/discord/chat/bridge/botuikit/ButtonComponent;", "hasIcon", "setThemedBackgroundColor", "", "Lcom/google/android/material/button/MaterialButton;", ViewProps.COLOR, "", ViewProps.BORDER_COLOR, "setBrandColor", "setDangerColor", "setSuccessColor", "setSecondaryColor", "chat_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ButtonComponentViewKt {
    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean hasEmoji(ButtonComponent buttonComponent) {
        return buttonComponent.getEmoji() != null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final boolean hasIcon(ButtonComponent buttonComponent) {
        return buttonComponent.getStyle() == ButtonStyle.LINK;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setBrandColor(MaterialButton materialButton) {
        setThemedBackgroundColor(materialButton, ThemeManagerKt.getTheme().getControlPrimaryBackgroundDefault(), ThemeManagerKt.getTheme().getControlPrimaryBorderDefault());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setDangerColor(MaterialButton materialButton) {
        setThemedBackgroundColor(materialButton, ThemeManagerKt.getTheme().getControlCriticalPrimaryBackgroundDefault(), ThemeManagerKt.getTheme().getControlCriticalPrimaryBorderDefault());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setSecondaryColor(MaterialButton materialButton) {
        setThemedBackgroundColor(materialButton, ThemeManagerKt.getTheme().getControlSecondaryBackgroundDefault(), ThemeManagerKt.getTheme().getControlSecondaryBorderDefault());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final void setSuccessColor(MaterialButton materialButton) {
        setThemedBackgroundColor(materialButton, ThemeManagerKt.getTheme().getControlConnectedBackgroundDefault(), ThemeManagerKt.getTheme().getControlConnectedBorderDefault());
    }

    private static final void setThemedBackgroundColor(MaterialButton materialButton, int i5, int i6) {
        ButtonBackgroundUtilsKt.setBackgroundColors(materialButton, i5, Integer.valueOf(ColorUtilsKt.argbWithAdjustedAlpha(i5, 0.5f)));
        materialButton.setStrokeColor(ColorStateList.valueOf(i6));
    }
}
