package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.LinearLayout;
import android.widget.ProgressBar;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.constraintlayout.widget.Barrier;
import androidx.constraintlayout.widget.ConstraintLayout;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.chat.presentation.message.view.AttachmentUploadOverlayView;
import com.discord.chat.presentation.message.view.SpoilerView;
import com.facebook.drawee.view.SimpleDraweeView;
import nt.a;

/* loaded from: classes.dex */
public final class FileAttachmentViewBinding implements ViewBinding {

    @NonNull
    public final ConstraintLayout fileActionGroup;

    @NonNull
    public final TextView fileAttachmentDescription;

    @NonNull
    public final SimpleDraweeView fileAttachmentDownload;

    @NonNull
    public final Barrier fileAttachmentDownloadIconBarrier;

    @NonNull
    public final ProgressBar fileAttachmentDownloadProgressBar;

    @NonNull
    public final SimpleDraweeView fileAttachmentIcon;

    @NonNull
    public final TextView fileAttachmentName;

    @NonNull
    private final View rootView;

    @NonNull
    public final SpoilerView spoiler;

    @NonNull
    public final AttachmentUploadOverlayView uploadOverlay;

    @NonNull
    public final LinearLayout uploadOverlayBackground;

    private FileAttachmentViewBinding(@NonNull View view, @NonNull ConstraintLayout constraintLayout, @NonNull TextView textView, @NonNull SimpleDraweeView simpleDraweeView, @NonNull Barrier barrier, @NonNull ProgressBar progressBar, @NonNull SimpleDraweeView simpleDraweeView2, @NonNull TextView textView2, @NonNull SpoilerView spoilerView, @NonNull AttachmentUploadOverlayView attachmentUploadOverlayView, @NonNull LinearLayout linearLayout) {
        this.rootView = view;
        this.fileActionGroup = constraintLayout;
        this.fileAttachmentDescription = textView;
        this.fileAttachmentDownload = simpleDraweeView;
        this.fileAttachmentDownloadIconBarrier = barrier;
        this.fileAttachmentDownloadProgressBar = progressBar;
        this.fileAttachmentIcon = simpleDraweeView2;
        this.fileAttachmentName = textView2;
        this.spoiler = spoilerView;
        this.uploadOverlay = attachmentUploadOverlayView;
        this.uploadOverlayBackground = linearLayout;
    }

    @NonNull
    public static FileAttachmentViewBinding bind(@NonNull View view) {
        int i5 = R.id.file_action_group;
        ConstraintLayout constraintLayout = (ConstraintLayout) a.p(i5, view);
        if (constraintLayout != null) {
            i5 = R.id.file_attachment_description;
            TextView textView = (TextView) a.p(i5, view);
            if (textView != null) {
                i5 = R.id.file_attachment_download;
                SimpleDraweeView simpleDraweeView = (SimpleDraweeView) a.p(i5, view);
                if (simpleDraweeView != null) {
                    i5 = R.id.file_attachment_download_icon_barrier;
                    Barrier barrier = (Barrier) a.p(i5, view);
                    if (barrier != null) {
                        i5 = R.id.file_attachment_download_progress_bar;
                        ProgressBar progressBar = (ProgressBar) a.p(i5, view);
                        if (progressBar != null) {
                            i5 = R.id.file_attachment_icon;
                            SimpleDraweeView simpleDraweeView2 = (SimpleDraweeView) a.p(i5, view);
                            if (simpleDraweeView2 != null) {
                                i5 = R.id.file_attachment_name;
                                TextView textView2 = (TextView) a.p(i5, view);
                                if (textView2 != null) {
                                    i5 = R.id.spoiler;
                                    SpoilerView spoilerView = (SpoilerView) a.p(i5, view);
                                    if (spoilerView != null) {
                                        i5 = R.id.upload_overlay;
                                        AttachmentUploadOverlayView attachmentUploadOverlayView = (AttachmentUploadOverlayView) a.p(i5, view);
                                        if (attachmentUploadOverlayView != null) {
                                            i5 = R.id.upload_overlay_background;
                                            LinearLayout linearLayout = (LinearLayout) a.p(i5, view);
                                            if (linearLayout != null) {
                                                return new FileAttachmentViewBinding(view, constraintLayout, textView, simpleDraweeView, barrier, progressBar, simpleDraweeView2, textView2, spoilerView, attachmentUploadOverlayView, linearLayout);
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
    public static FileAttachmentViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.file_attachment_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
