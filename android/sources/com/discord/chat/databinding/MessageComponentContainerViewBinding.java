package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.chat.presentation.message.view.SpoilerView;
import nt.a;

/* loaded from: classes.dex */
public final class MessageComponentContainerViewBinding implements ViewBinding {

    @NonNull
    public final View accentBorder;

    @NonNull
    public final LinearLayout childrenViews;

    @NonNull
    private final View rootView;

    @NonNull
    public final SpoilerView spoiler;

    private MessageComponentContainerViewBinding(@NonNull View view, @NonNull View view2, @NonNull LinearLayout linearLayout, @NonNull SpoilerView spoilerView) {
        this.rootView = view;
        this.accentBorder = view2;
        this.childrenViews = linearLayout;
        this.spoiler = spoilerView;
    }

    @NonNull
    public static MessageComponentContainerViewBinding bind(@NonNull View view) {
        int i5 = R.id.accent_border;
        View p3 = a.p(i5, view);
        if (p3 != null) {
            i5 = R.id.children_views;
            LinearLayout linearLayout = (LinearLayout) a.p(i5, view);
            if (linearLayout != null) {
                i5 = R.id.spoiler;
                SpoilerView spoilerView = (SpoilerView) a.p(i5, view);
                if (spoilerView != null) {
                    return new MessageComponentContainerViewBinding(view, p3, linearLayout, spoilerView);
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static MessageComponentContainerViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.message_component_container_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
