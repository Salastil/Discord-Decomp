package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import androidx.annotation.NonNull;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.chat.presentation.message.view.botuikit.components.checkpoint.CheckpointCardV2026ComponentView;
import nt.a;

/* loaded from: classes.dex */
public final class MessageComponentCheckpointCardV2026ViewBinding implements ViewBinding {

    @NonNull
    public final ConstraintLayout cardBackground;

    @NonNull
    public final ImageView character;

    @NonNull
    private final CheckpointCardV2026ComponentView rootView;

    private MessageComponentCheckpointCardV2026ViewBinding(@NonNull CheckpointCardV2026ComponentView checkpointCardV2026ComponentView, @NonNull ConstraintLayout constraintLayout, @NonNull ImageView imageView) {
        this.rootView = checkpointCardV2026ComponentView;
        this.cardBackground = constraintLayout;
        this.character = imageView;
    }

    @NonNull
    public static MessageComponentCheckpointCardV2026ViewBinding bind(@NonNull View view) {
        int i5 = R.id.card_background;
        ConstraintLayout constraintLayout = (ConstraintLayout) a.p(i5, view);
        if (constraintLayout != null) {
            i5 = R.id.character;
            ImageView imageView = (ImageView) a.p(i5, view);
            if (imageView != null) {
                return new MessageComponentCheckpointCardV2026ViewBinding((CheckpointCardV2026ComponentView) view, constraintLayout, imageView);
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static MessageComponentCheckpointCardV2026ViewBinding inflate(@NonNull LayoutInflater layoutInflater) {
        return inflate(layoutInflater, null, false);
    }

    @NonNull
    public static MessageComponentCheckpointCardV2026ViewBinding inflate(@NonNull LayoutInflater layoutInflater, ViewGroup viewGroup, boolean z5) {
        View inflate = layoutInflater.inflate(R.layout.message_component_checkpoint_card_v2026_view, viewGroup, false);
        if (z5) {
            viewGroup.addView(inflate);
        }
        return bind(inflate);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public CheckpointCardV2026ComponentView getRoot() {
        return this.rootView;
    }
}
