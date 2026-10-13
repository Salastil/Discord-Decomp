package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.sticker.StickerView;
import nt.a;

/* loaded from: classes.dex */
public final class WelcomeStickerViewBinding implements ViewBinding {

    @NonNull
    private final View rootView;

    @NonNull
    public final StickerView stickerView;

    @NonNull
    public final TextView welcomeReplyText;

    private WelcomeStickerViewBinding(@NonNull View view, @NonNull StickerView stickerView, @NonNull TextView textView) {
        this.rootView = view;
        this.stickerView = stickerView;
        this.welcomeReplyText = textView;
    }

    @NonNull
    public static WelcomeStickerViewBinding bind(@NonNull View view) {
        int i5 = R.id.sticker_view;
        StickerView stickerView = (StickerView) a.p(i5, view);
        if (stickerView != null) {
            i5 = R.id.welcome_reply_text;
            TextView textView = (TextView) a.p(i5, view);
            if (textView != null) {
                return new WelcomeStickerViewBinding(view, stickerView, textView);
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static WelcomeStickerViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.welcome_sticker_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
