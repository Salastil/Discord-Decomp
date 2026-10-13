package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.google.android.flexbox.FlexboxLayout;
import nt.a;

/* loaded from: classes.dex */
public final class MessageComponentActionRowViewBinding implements ViewBinding {

    @NonNull
    public final FlexboxLayout actionRowComponentViewGroup;

    @NonNull
    public final ComponentFailedLabelViewBinding actionRowComponentViewGroupErrorRow;

    @NonNull
    private final View rootView;

    private MessageComponentActionRowViewBinding(@NonNull View view, @NonNull FlexboxLayout flexboxLayout, @NonNull ComponentFailedLabelViewBinding componentFailedLabelViewBinding) {
        this.rootView = view;
        this.actionRowComponentViewGroup = flexboxLayout;
        this.actionRowComponentViewGroupErrorRow = componentFailedLabelViewBinding;
    }

    @NonNull
    public static MessageComponentActionRowViewBinding bind(@NonNull View view) {
        View p3;
        int i5 = R.id.action_row_component_view_group;
        FlexboxLayout flexboxLayout = (FlexboxLayout) a.p(i5, view);
        if (flexboxLayout == null || (p3 = a.p((i5 = R.id.action_row_component_view_group_error_row), view)) == null) {
            throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
        }
        return new MessageComponentActionRowViewBinding(view, flexboxLayout, ComponentFailedLabelViewBinding.bind(p3));
    }

    @NonNull
    public static MessageComponentActionRowViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.message_component_action_row_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
