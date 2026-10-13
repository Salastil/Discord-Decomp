package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import nt.a;

/* loaded from: classes.dex */
public final class MessageComponentSeparatorDisplayViewBinding implements ViewBinding {

    @NonNull
    public final View divider;

    @NonNull
    private final View rootView;

    private MessageComponentSeparatorDisplayViewBinding(@NonNull View view, @NonNull View view2) {
        this.rootView = view;
        this.divider = view2;
    }

    @NonNull
    public static MessageComponentSeparatorDisplayViewBinding bind(@NonNull View view) {
        int i5 = R.id.divider;
        View p3 = a.p(i5, view);
        if (p3 != null) {
            return new MessageComponentSeparatorDisplayViewBinding(view, p3);
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static MessageComponentSeparatorDisplayViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.message_component_separator_display_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
