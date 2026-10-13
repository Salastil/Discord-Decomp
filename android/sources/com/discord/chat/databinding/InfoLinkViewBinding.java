package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class InfoLinkViewBinding implements ViewBinding {

    @NonNull
    public final TextView description;

    @NonNull
    public final SimpleDraweeView icon;

    @NonNull
    public final ConstraintLayout infoLinkContainer;

    @NonNull
    private final View rootView;

    private InfoLinkViewBinding(@NonNull View view, @NonNull TextView textView, @NonNull SimpleDraweeView simpleDraweeView, @NonNull ConstraintLayout constraintLayout) {
        this.rootView = view;
        this.description = textView;
        this.icon = simpleDraweeView;
        this.infoLinkContainer = constraintLayout;
    }

    @NonNull
    public static InfoLinkViewBinding bind(@NonNull View view) {
        int i5 = R.id.description;
        TextView textView = (TextView) a.p(i5, view);
        if (textView != null) {
            i5 = R.id.icon;
            SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
            if (simpleDraweeView != null) {
                i5 = R.id.info_link_container;
                ConstraintLayout constraintLayout = (ConstraintLayout) a.p(i5, view);
                if (constraintLayout != null) {
                    return new InfoLinkViewBinding(view, textView, simpleDraweeView, constraintLayout);
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static InfoLinkViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.info_link_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
