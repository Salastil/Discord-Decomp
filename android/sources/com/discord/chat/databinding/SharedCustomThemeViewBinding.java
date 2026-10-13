package com.discord.chat.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.viewbinding.ViewBinding;
import com.discord.chat.R;
import com.discord.chat.presentation.message.view.customthemes.ThemePreviewView;
import com.discord.core.DCDButton;
import com.google.android.flexbox.FlexboxLayout;
import nt.a;

/* loaded from: classes.dex */
public final class SharedCustomThemeViewBinding implements ViewBinding {

    @NonNull
    public final TextView createdBy;

    @NonNull
    public final FlexboxLayout createdByContainer;

    @NonNull
    public final FlexboxLayout heading;

    @NonNull
    public final DCDButton previewBtn;

    @NonNull
    public final TextView previewHeading;

    @NonNull
    private final View rootView;

    @NonNull
    public final ThemePreviewView themePreview;

    private SharedCustomThemeViewBinding(@NonNull View view, @NonNull TextView textView, @NonNull FlexboxLayout flexboxLayout, @NonNull FlexboxLayout flexboxLayout2, @NonNull DCDButton dCDButton, @NonNull TextView textView2, @NonNull ThemePreviewView themePreviewView) {
        this.rootView = view;
        this.createdBy = textView;
        this.createdByContainer = flexboxLayout;
        this.heading = flexboxLayout2;
        this.previewBtn = dCDButton;
        this.previewHeading = textView2;
        this.themePreview = themePreviewView;
    }

    @NonNull
    public static SharedCustomThemeViewBinding bind(@NonNull View view) {
        int i5 = R.id.createdBy;
        TextView textView = (TextView) a.p(i5, view);
        if (textView != null) {
            i5 = R.id.createdByContainer;
            FlexboxLayout flexboxLayout = (FlexboxLayout) a.p(i5, view);
            if (flexboxLayout != null) {
                i5 = R.id.heading;
                FlexboxLayout flexboxLayout2 = (FlexboxLayout) a.p(i5, view);
                if (flexboxLayout2 != null) {
                    i5 = R.id.previewBtn;
                    DCDButton dCDButton = (DCDButton) a.p(i5, view);
                    if (dCDButton != null) {
                        i5 = R.id.previewHeading;
                        TextView textView2 = (TextView) a.p(i5, view);
                        if (textView2 != null) {
                            i5 = R.id.themePreview;
                            ThemePreviewView themePreviewView = (ThemePreviewView) a.p(i5, view);
                            if (themePreviewView != null) {
                                return new SharedCustomThemeViewBinding(view, textView, flexboxLayout, flexboxLayout2, dCDButton, textView2, themePreviewView);
                            }
                        }
                    }
                }
            }
        }
        throw new NullPointerException("Missing required view with ID: ".concat(view.getResources().getResourceName(i5)));
    }

    @NonNull
    public static SharedCustomThemeViewBinding inflate(@NonNull LayoutInflater layoutInflater, @NonNull ViewGroup viewGroup) {
        if (viewGroup == null) {
            throw new NullPointerException("parent");
        }
        layoutInflater.inflate(R.layout.shared_custom_theme_view, viewGroup);
        return bind(viewGroup);
    }

    @Override // androidx.viewbinding.ViewBinding
    @NonNull
    public View getRoot() {
        return this.rootView;
    }
}
