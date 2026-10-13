package com.discord.chat.presentation.message.system;

import android.util.TypedValue;
import android.view.View;
import com.discord.chat.presentation.message.view.AttachmentUploadOverlayView;
import com.discord.chat.presentation.message.view.CtaButtonView;
import com.discord.chat.presentation.message.view.ObscureOverlayView;
import com.discord.chat.presentation.message.view.botuikit.components.ButtonComponentView;
import com.discord.reactions.ShortcutsFlexbox;
import km.c;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3964d;

    public /* synthetic */ b(int i5) {
        this.f3964d = i5;
    }

    private final void a(View view) {
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3964d) {
            case 0:
                SystemMessageView.setMessage$lambda$11(view);
                break;
            case 1:
                AttachmentUploadOverlayView.setUploadCancel$lambda$21(view);
                break;
            case 2:
                CtaButtonView.configureButton_CMNjcK4$lambda$1(view);
                break;
            case 3:
                ObscureOverlayView._init_$lambda$0(view);
                break;
            case 4:
                ButtonComponentView.configure$lambda$4(view);
                break;
            case 5:
                TypedValue typedValue = c.f13407m0;
                break;
            case 6:
                ShortcutsFlexbox.setReactions$lambda$0(view);
                break;
        }
    }
}
