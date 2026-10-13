package com.discord.reactions.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.reactions.R;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class AddReactionViewBinding implements ViewBinding {

    @NonNull
    public final SimpleDraweeView addReactionImage;

    @NonNull
    public final TextView addReactionText;

    @NonNull
    private final View rootView;

    private AddReactionViewBinding(@NonNull View view, @NonNull SimpleDraweeView simpleDraweeView, @NonNull TextView textView) {
        this.rootView = view;
        this.addReactionImage = simpleDraweeView;
        this.addReactionText = textView;
    }

    @NonNull
    public static AddReactionViewBinding bind(@NonNull View view) {
        int i5 = R.id.add_reaction_image;
        SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
        if (simpleDraweeView != null) {
            i5 = R.id.add_reaction_text;
            TextView textView = (TextView) a.p(i5, view);
            if (textView != null) {
                return new AddReactionViewBinding(view, simpleDraweeView, textView);
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static AddReactionViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.add_reaction_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
