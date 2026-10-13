package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.chat.presentation.message.view.AttachmentUploadOverlayView;
import com.discord.chat.presentation.message.view.voicemessages.AudioProgressBar;
import com.discord.chat.presentation.message.view.voicemessages.AudioWaveView;
import com.facebook.drawee.span.SimpleDraweeSpanTextView;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class AudioPlayerViewBinding implements ViewBinding {

    @NonNull
    public final LinearLayout audioDetailsView;

    @NonNull
    public final TextView audioFileName;

    @NonNull
    public final TextView audioFileSize;

    @NonNull
    public final AudioProgressBar audioProgressBar;

    @NonNull
    public final LinearLayout audioProgressView;

    @NonNull
    public final SimpleDraweeView button;

    @NonNull
    public final View buttonContainer;

    @NonNull
    public final LinearLayout playerContainer;

    @NonNull
    public final ProgressBar progress;

    @NonNull
    private final View rootView;

    @NonNull
    public final SimpleDraweeSpanTextView text;

    @NonNull
    public final AttachmentUploadOverlayView uploadOverlay;

    @NonNull
    public final LinearLayout uploadOverlayBackground;

    @NonNull
    public final AudioWaveView wave;

    @NonNull
    public final View wipe;

    private AudioPlayerViewBinding(@NonNull View view, @NonNull LinearLayout linearLayout, @NonNull TextView textView, @NonNull TextView textView2, @NonNull AudioProgressBar audioProgressBar, @NonNull LinearLayout linearLayout2, @NonNull SimpleDraweeView simpleDraweeView, @NonNull View view2, @NonNull LinearLayout linearLayout3, @NonNull ProgressBar progressBar, @NonNull SimpleDraweeSpanTextView simpleDraweeSpanTextView, @NonNull AttachmentUploadOverlayView attachmentUploadOverlayView, @NonNull LinearLayout linearLayout4, @NonNull AudioWaveView audioWaveView, @NonNull View view3) {
        this.rootView = view;
        this.audioDetailsView = linearLayout;
        this.audioFileName = textView;
        this.audioFileSize = textView2;
        this.audioProgressBar = audioProgressBar;
        this.audioProgressView = linearLayout2;
        this.button = simpleDraweeView;
        this.buttonContainer = view2;
        this.playerContainer = linearLayout3;
        this.progress = progressBar;
        this.text = simpleDraweeSpanTextView;
        this.uploadOverlay = attachmentUploadOverlayView;
        this.uploadOverlayBackground = linearLayout4;
        this.wave = audioWaveView;
        this.wipe = view3;
    }

    @NonNull
    public static AudioPlayerViewBinding bind(@NonNull View view) {
        View p3;
        View p5;
        int i5 = R.id.audio_details_view;
        LinearLayout linearLayout = (LinearLayout) a.p(i5, view);
        if (linearLayout != null) {
            i5 = R.id.audio_file_name;
            TextView textView = (TextView) a.p(i5, view);
            if (textView != null) {
                i5 = R.id.audio_file_size;
                TextView textView2 = (TextView) a.p(i5, view);
                if (textView2 != null) {
                    i5 = R.id.audio_progress_bar;
                    AudioProgressBar audioProgressBar = (AudioProgressBar) a.p(i5, view);
                    if (audioProgressBar != null) {
                        i5 = R.id.audio_progress_view;
                        LinearLayout linearLayout2 = (LinearLayout) a.p(i5, view);
                        if (linearLayout2 != null) {
                            i5 = R.id.button;
                            SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
                            if (simpleDraweeView != null && (p3 = a.p((i5 = R.id.button_container), view)) != null) {
                                i5 = R.id.player_container;
                                LinearLayout linearLayout3 = (LinearLayout) a.p(i5, view);
                                if (linearLayout3 != null) {
                                    i5 = R.id.progress;
                                    ProgressBar progressBar = (ProgressBar) a.p(i5, view);
                                    if (progressBar != null) {
                                        i5 = R.id.text;
                                        SimpleDraweeSpanTextView simpleDraweeSpanTextView = (SimpleDraweeSpanTextView) a.p(i5, view);
                                        if (simpleDraweeSpanTextView != null) {
                                            i5 = R.id.upload_overlay;
                                            AttachmentUploadOverlayView attachmentUploadOverlayView = (AttachmentUploadOverlayView) a.p(i5, view);
                                            if (attachmentUploadOverlayView != null) {
                                                i5 = R.id.upload_overlay_background;
                                                LinearLayout linearLayout4 = (LinearLayout) a.p(i5, view);
                                                if (linearLayout4 != null) {
                                                    i5 = R.id.wave;
                                                    AudioWaveView audioWaveView = (AudioWaveView) a.p(i5, view);
                                                    if (audioWaveView != null && (p5 = a.p((i5 = R.id.wipe), view)) != null) {
                                                        return new AudioPlayerViewBinding(view, linearLayout, textView, textView2, audioProgressBar, linearLayout2, simpleDraweeView, p3, linearLayout3, progressBar, simpleDraweeSpanTextView, attachmentUploadOverlayView, linearLayout4, audioWaveView, p5);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static AudioPlayerViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.audio_player_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
