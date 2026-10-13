package com.discord.chat.presentation.list.delegate;

import android.text.Editable;
import android.text.method.PasswordTransformationMethod;
import android.view.View;
import android.widget.EditText;
import androidx.fragment.app.Fragment;
import com.discord.chat.databinding.SeparatorSummaryViewBinding;
import com.discord.chat.presentation.message.view.AttachmentUploadOverlayView;
import com.discord.chat.presentation.message.view.MediaView;
import com.discord.chat.presentation.message.view.UploadItemProps;
import com.discord.chat.presentation.separator.SummarySeparatorView;
import com.facebook.react.devsupport.perfmonitor.PerfMonitorOverlayView;
import com.facebook.react.views.view.ReactViewGroup;
import com.facebook.react.views.view.ReactViewManager;
import com.google.android.material.datepicker.n;
import com.swmansion.rnscreens.Screen;
import com.swmansion.rnscreens.ScreenStackHeaderConfig;
import com.swmansion.rnscreens.b0;
import com.swmansion.rnscreens.r0;
import k2.r;
import kotlin.jvm.internal.Intrinsics;
import oh.k;
import oh.u;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3885d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3886e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f3885d = i5;
        this.f3886e = obj;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3885d) {
            case 0:
                ((b7.a) this.f3886e).invoke(view);
                return;
            case 1:
                AttachmentUploadOverlayView.setUploadCancel$lambda$20((UploadItemProps) this.f3886e, view);
                return;
            case 2:
                ((MediaView) this.f3886e).prepareAndPlay();
                return;
            case 3:
                PerfMonitorOverlayView.createToolbarDialog$lambda$8((PerfMonitorOverlayView) this.f3886e, view);
                return;
            case 4:
                ReactViewManager.setFocusable$lambda$3((ReactViewGroup) this.f3886e, view);
                return;
            case 5:
                ((n) this.f3886e).u();
                throw null;
            case 6:
                com.swmansion.rnscreens.b bVar = (com.swmansion.rnscreens.b) this.f3886e;
                View.OnClickListener onClickListener = bVar.I0;
                if (onClickListener != null) {
                    onClickListener.onClick(view);
                }
                bVar.J0.d();
                return;
            case 7:
                ScreenStackHeaderConfig.a((ScreenStackHeaderConfig) this.f3886e);
                return;
            case 8:
                r0.e((r0) this.f3886e);
                return;
            case 9:
                SummarySeparatorView.lambda$2$lambda$1((SeparatorSummaryViewBinding) this.f3886e, view);
                return;
            case 10:
                Screen screen = (Screen) this.f3886e;
                if (screen.getSheetClosesOnTouchOutside()) {
                    Fragment fragment = screen.getFragment();
                    Intrinsics.checkNotNull(fragment, "null cannot be cast to non-null type com.swmansion.rnscreens.ScreenStackFragment");
                    ((b0) fragment).y();
                    return;
                }
                return;
            case 11:
                oh.c cVar = (oh.c) this.f3886e;
                EditText editText = cVar.f15893i;
                if (editText == null) {
                    return;
                }
                Editable text = editText.getText();
                if (text != null) {
                    text.clear();
                }
                cVar.p();
                return;
            case 12:
                ((k) this.f3886e).t();
                return;
            case 13:
                u uVar = (u) this.f3886e;
                EditText editText2 = uVar.f15958f;
                if (editText2 == null) {
                    return;
                }
                int selectionEnd = editText2.getSelectionEnd();
                EditText editText3 = uVar.f15958f;
                if (editText3 == null || !(editText3.getTransformationMethod() instanceof PasswordTransformationMethod)) {
                    uVar.f15958f.setTransformationMethod(PasswordTransformationMethod.getInstance());
                } else {
                    uVar.f15958f.setTransformationMethod(null);
                }
                if (selectionEnd >= 0) {
                    uVar.f15958f.setSelection(selectionEnd);
                }
                uVar.p();
                return;
            default:
                ((h8.a) ((r) this.f3886e).f13144v).invoke();
                return;
        }
    }
}
