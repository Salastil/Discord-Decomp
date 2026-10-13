package com.google.android.material.datepicker;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.InsetDrawable;
import android.graphics.drawable.StateListDrawable;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.core.view.WindowInsetsControllerCompat;
import androidx.core.view.j0;
import androidx.core.view.s0;
import androidx.fragment.app.DialogFragment;
import com.discord.R;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import com.google.android.material.internal.CheckableImageButton;
import java.util.Calendar;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public class n<S> extends DialogFragment {
    public CharSequence E;
    public boolean F;
    public int G;
    public int H;
    public CharSequence I;
    public int J;
    public CharSequence K;
    public int L;
    public CharSequence M;
    public int N;
    public CharSequence O;
    public TextView P;
    public TextView Q;
    public CheckableImageButton R;
    public lh.i S;
    public boolean T;
    public CharSequence U;
    public CharSequence V;

    /* renamed from: d, reason: collision with root package name */
    public final LinkedHashSet f6038d;

    /* renamed from: e, reason: collision with root package name */
    public final LinkedHashSet f6039e;

    /* renamed from: i, reason: collision with root package name */
    public int f6040i;

    /* renamed from: v, reason: collision with root package name */
    public u f6041v;

    /* renamed from: w, reason: collision with root package name */
    public b f6042w;

    /* renamed from: x, reason: collision with root package name */
    public l f6043x;

    /* renamed from: y, reason: collision with root package name */
    public int f6044y;

    public n() {
        new LinkedHashSet();
        new LinkedHashSet();
        this.f6038d = new LinkedHashSet();
        this.f6039e = new LinkedHashSet();
    }

    public static int v(Context context) {
        Resources resources = context.getResources();
        int dimensionPixelOffset = resources.getDimensionPixelOffset(R.dimen.mtrl_calendar_content_padding);
        Calendar b10 = y.b();
        b10.set(5, 1);
        Calendar a = y.a(b10);
        a.get(2);
        a.get(1);
        int maximum = a.getMaximum(7);
        a.getActualMaximum(5);
        a.getTimeInMillis();
        int dimensionPixelSize = resources.getDimensionPixelSize(R.dimen.mtrl_calendar_day_width) * maximum;
        return ((maximum - 1) * resources.getDimensionPixelOffset(R.dimen.mtrl_calendar_month_horizontal_padding)) + dimensionPixelSize + (dimensionPixelOffset * 2);
    }

    public static boolean w(Context context, int i5) {
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(m3.n.L0(context, l.class.getCanonicalName(), R.attr.materialCalendarStyle).data, new int[]{i5});
        boolean z5 = obtainStyledAttributes.getBoolean(0, false);
        obtainStyledAttributes.recycle();
        return z5;
    }

    @Override // androidx.fragment.app.DialogFragment, android.content.DialogInterface.OnCancelListener
    public final void onCancel(DialogInterface dialogInterface) {
        Iterator it = this.f6038d.iterator();
        while (it.hasNext()) {
            ((DialogInterface.OnCancelListener) it.next()).onCancel(dialogInterface);
        }
        super.onCancel(dialogInterface);
    }

    @Override // androidx.fragment.app.DialogFragment, androidx.fragment.app.Fragment
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (bundle == null) {
            bundle = getArguments();
        }
        this.f6040i = bundle.getInt("OVERRIDE_THEME_RES_ID");
        if (bundle.getParcelable("DATE_SELECTOR_KEY") != null) {
            throw new ClassCastException();
        }
        this.f6042w = (b) bundle.getParcelable("CALENDAR_CONSTRAINTS_KEY");
        if (bundle.getParcelable("DAY_VIEW_DECORATOR_KEY") != null) {
            throw new ClassCastException();
        }
        this.f6044y = bundle.getInt("TITLE_TEXT_RES_ID_KEY");
        this.E = bundle.getCharSequence("TITLE_TEXT_KEY");
        this.G = bundle.getInt("INPUT_MODE_KEY");
        this.H = bundle.getInt("POSITIVE_BUTTON_TEXT_RES_ID_KEY");
        this.I = bundle.getCharSequence("POSITIVE_BUTTON_TEXT_KEY");
        this.J = bundle.getInt("POSITIVE_BUTTON_CONTENT_DESCRIPTION_RES_ID_KEY");
        this.K = bundle.getCharSequence("POSITIVE_BUTTON_CONTENT_DESCRIPTION_KEY");
        this.L = bundle.getInt("NEGATIVE_BUTTON_TEXT_RES_ID_KEY");
        this.M = bundle.getCharSequence("NEGATIVE_BUTTON_TEXT_KEY");
        this.N = bundle.getInt("NEGATIVE_BUTTON_CONTENT_DESCRIPTION_RES_ID_KEY");
        this.O = bundle.getCharSequence("NEGATIVE_BUTTON_CONTENT_DESCRIPTION_KEY");
        CharSequence charSequence = this.E;
        if (charSequence == null) {
            charSequence = requireContext().getResources().getText(this.f6044y);
        }
        this.U = charSequence;
        if (charSequence != null) {
            CharSequence[] split = TextUtils.split(String.valueOf(charSequence), ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE);
            if (split.length > 1) {
                charSequence = split[0];
            }
        } else {
            charSequence = null;
        }
        this.V = charSequence;
    }

    @Override // androidx.fragment.app.DialogFragment
    public final Dialog onCreateDialog(Bundle bundle) {
        Context requireContext = requireContext();
        requireContext();
        int i5 = this.f6040i;
        if (i5 == 0) {
            u();
            throw null;
        }
        Dialog dialog = new Dialog(requireContext, i5);
        Context context = dialog.getContext();
        this.F = w(context, android.R.attr.windowFullscreen);
        this.S = new lh.i(context, null, R.attr.materialCalendarStyle, R.style.Widget_MaterialComponents_MaterialCalendar);
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(null, lg.a.f13970u, R.attr.materialCalendarStyle, R.style.Widget_MaterialComponents_MaterialCalendar);
        int color = obtainStyledAttributes.getColor(1, 0);
        obtainStyledAttributes.recycle();
        this.S.m(context);
        this.S.q(ColorStateList.valueOf(color));
        this.S.p(dialog.getWindow().getDecorView().getElevation());
        return dialog;
    }

    @Override // androidx.fragment.app.Fragment
    public final View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        View inflate = layoutInflater.inflate(this.F ? R.layout.mtrl_picker_fullscreen : R.layout.mtrl_picker_dialog, viewGroup);
        Context context = inflate.getContext();
        if (this.F) {
            inflate.findViewById(R.id.mtrl_calendar_frame).setLayoutParams(new LinearLayout.LayoutParams(v(context), -2));
        } else {
            inflate.findViewById(R.id.mtrl_calendar_main_pane).setLayoutParams(new LinearLayout.LayoutParams(v(context), -1));
        }
        TextView textView = (TextView) inflate.findViewById(R.id.mtrl_picker_header_selection_text);
        this.Q = textView;
        textView.setAccessibilityLiveRegion(1);
        this.R = (CheckableImageButton) inflate.findViewById(R.id.mtrl_picker_header_toggle);
        this.P = (TextView) inflate.findViewById(R.id.mtrl_picker_title_text);
        this.R.setTag("TOGGLE_BUTTON_TAG");
        CheckableImageButton checkableImageButton = this.R;
        StateListDrawable stateListDrawable = new StateListDrawable();
        stateListDrawable.addState(new int[]{android.R.attr.state_checked}, ys.d.J(context, R.drawable.material_ic_calendar_black_24dp));
        stateListDrawable.addState(new int[0], ys.d.J(context, R.drawable.material_ic_edit_black_24dp));
        checkableImageButton.setImageDrawable(stateListDrawable);
        this.R.setChecked(this.G != 0);
        s0.p(this.R, null);
        CheckableImageButton checkableImageButton2 = this.R;
        this.R.setContentDescription(this.G == 1 ? checkableImageButton2.getContext().getString(R.string.mtrl_picker_toggle_to_calendar_input_mode) : checkableImageButton2.getContext().getString(R.string.mtrl_picker_toggle_to_text_input_mode));
        this.R.setOnClickListener(new com.discord.chat.presentation.list.delegate.b(5, this));
        u();
        throw null;
    }

    @Override // androidx.fragment.app.DialogFragment, android.content.DialogInterface.OnDismissListener
    public final void onDismiss(DialogInterface dialogInterface) {
        Iterator it = this.f6039e.iterator();
        while (it.hasNext()) {
            ((DialogInterface.OnDismissListener) it.next()).onDismiss(dialogInterface);
        }
        ViewGroup viewGroup = (ViewGroup) getView();
        if (viewGroup != null) {
            viewGroup.removeAllViews();
        }
        super.onDismiss(dialogInterface);
    }

    @Override // androidx.fragment.app.DialogFragment, androidx.fragment.app.Fragment
    public final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putInt("OVERRIDE_THEME_RES_ID", this.f6040i);
        bundle.putParcelable("DATE_SELECTOR_KEY", null);
        b bVar = this.f6042w;
        a aVar = new a();
        int i5 = a.f6007b;
        int i6 = a.f6007b;
        long j = bVar.f6008d.f6052x;
        long j5 = bVar.f6009e.f6052x;
        aVar.a = Long.valueOf(bVar.f6011v.f6052x);
        int i10 = bVar.f6012w;
        d dVar = bVar.f6010i;
        l lVar = this.f6043x;
        p pVar = lVar == null ? null : lVar.f6029v;
        if (pVar != null) {
            aVar.a = Long.valueOf(pVar.f6052x);
        }
        Bundle bundle2 = new Bundle();
        bundle2.putParcelable("DEEP_COPY_VALIDATOR_KEY", dVar);
        p h6 = p.h(j);
        p h7 = p.h(j5);
        d dVar2 = (d) bundle2.getParcelable("DEEP_COPY_VALIDATOR_KEY");
        Long l6 = aVar.a;
        bundle.putParcelable("CALENDAR_CONSTRAINTS_KEY", new b(h6, h7, dVar2, l6 == null ? null : p.h(l6.longValue()), i10));
        bundle.putParcelable("DAY_VIEW_DECORATOR_KEY", null);
        bundle.putInt("TITLE_TEXT_RES_ID_KEY", this.f6044y);
        bundle.putCharSequence("TITLE_TEXT_KEY", this.E);
        bundle.putInt("INPUT_MODE_KEY", this.G);
        bundle.putInt("POSITIVE_BUTTON_TEXT_RES_ID_KEY", this.H);
        bundle.putCharSequence("POSITIVE_BUTTON_TEXT_KEY", this.I);
        bundle.putInt("POSITIVE_BUTTON_CONTENT_DESCRIPTION_RES_ID_KEY", this.J);
        bundle.putCharSequence("POSITIVE_BUTTON_CONTENT_DESCRIPTION_KEY", this.K);
        bundle.putInt("NEGATIVE_BUTTON_TEXT_RES_ID_KEY", this.L);
        bundle.putCharSequence("NEGATIVE_BUTTON_TEXT_KEY", this.M);
        bundle.putInt("NEGATIVE_BUTTON_CONTENT_DESCRIPTION_RES_ID_KEY", this.N);
        bundle.putCharSequence("NEGATIVE_BUTTON_CONTENT_DESCRIPTION_KEY", this.O);
    }

    @Override // androidx.fragment.app.DialogFragment, androidx.fragment.app.Fragment
    public final void onStart() {
        super.onStart();
        Window window = requireDialog().getWindow();
        if (this.F) {
            window.setLayout(-1, -1);
            window.setBackgroundDrawable(this.S);
            if (!this.T) {
                View findViewById = requireView().findViewById(R.id.fullscreen_header);
                ColorStateList b10 = ah.d.b(findViewById.getBackground());
                Integer valueOf = b10 != null ? Integer.valueOf(b10.getDefaultColor()) : null;
                boolean z5 = false;
                boolean z6 = valueOf == null || valueOf.intValue() == 0;
                int x5 = com.facebook.imagepipeline.nativecode.c.x(window.getContext(), android.R.attr.colorBackground, -16777216);
                if (z6) {
                    valueOf = Integer.valueOf(x5);
                }
                ah.d.k(window, false);
                window.getContext();
                int e9 = Build.VERSION.SDK_INT < 27 ? b1.c.e(com.facebook.imagepipeline.nativecode.c.x(window.getContext(), android.R.attr.navigationBarColor, -16777216), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) : 0;
                window.setStatusBarColor(0);
                window.setNavigationBarColor(e9);
                new WindowInsetsControllerCompat(window, window.getDecorView()).c(com.facebook.imagepipeline.nativecode.c.M(0) || com.facebook.imagepipeline.nativecode.c.M(valueOf.intValue()));
                boolean M = com.facebook.imagepipeline.nativecode.c.M(x5);
                if (com.facebook.imagepipeline.nativecode.c.M(e9) || (e9 == 0 && M)) {
                    z5 = true;
                }
                new WindowInsetsControllerCompat(window, window.getDecorView()).b(z5);
                m mVar = new m(findViewById, findViewById.getLayoutParams().height, findViewById.getPaddingLeft(), findViewById.getPaddingTop(), findViewById.getPaddingRight());
                WeakHashMap weakHashMap = s0.a;
                j0.m(findViewById, mVar);
                this.T = true;
            }
        } else {
            window.setLayout(-2, -2);
            int dimensionPixelOffset = getResources().getDimensionPixelOffset(R.dimen.mtrl_calendar_dialog_background_inset);
            Rect rect = new Rect(dimensionPixelOffset, dimensionPixelOffset, dimensionPixelOffset, dimensionPixelOffset);
            window.setBackgroundDrawable(new InsetDrawable((Drawable) this.S, dimensionPixelOffset, dimensionPixelOffset, dimensionPixelOffset, dimensionPixelOffset));
            window.getDecorView().setOnTouchListener(new zg.a(requireDialog(), rect));
        }
        requireContext();
        int i5 = this.f6040i;
        if (i5 == 0) {
            u();
            throw null;
        }
        u();
        b bVar = this.f6042w;
        l lVar = new l();
        Bundle bundle = new Bundle();
        bundle.putInt("THEME_RES_ID_KEY", i5);
        bundle.putParcelable("GRID_SELECTOR_KEY", null);
        bundle.putParcelable("CALENDAR_CONSTRAINTS_KEY", bVar);
        bundle.putParcelable("DAY_VIEW_DECORATOR_KEY", null);
        bundle.putParcelable("CURRENT_MONTH_KEY", bVar.f6011v);
        lVar.setArguments(bundle);
        this.f6043x = lVar;
        u uVar = lVar;
        if (this.G == 1) {
            u();
            b bVar2 = this.f6042w;
            u oVar = new o();
            Bundle bundle2 = new Bundle();
            bundle2.putInt("THEME_RES_ID_KEY", i5);
            bundle2.putParcelable("DATE_SELECTOR_KEY", null);
            bundle2.putParcelable("CALENDAR_CONSTRAINTS_KEY", bVar2);
            oVar.setArguments(bundle2);
            uVar = oVar;
        }
        this.f6041v = uVar;
        this.P.setText((this.G == 1 && getResources().getConfiguration().orientation == 2) ? this.V : this.U);
        u();
        getContext();
        throw null;
    }

    @Override // androidx.fragment.app.DialogFragment, androidx.fragment.app.Fragment
    public final void onStop() {
        this.f6041v.f6065d.clear();
        super.onStop();
    }

    public final void u() {
        if (getArguments().getParcelable("DATE_SELECTOR_KEY") != null) {
            throw new ClassCastException();
        }
    }
}
