package com.google.android.material.datepicker;

import android.R;
import android.content.res.Resources;
import android.os.Bundle;
import android.view.ContextThemeWrapper;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityManager;
import android.view.animation.DecelerateInterpolator;
import android.widget.GridView;
import android.widget.ListAdapter;
import android.widget.Scroller;
import androidx.core.view.s0;
import androidx.recyclerview.widget.GridLayoutManager;
import androidx.recyclerview.widget.RecyclerView;
import androidx.recyclerview.widget.m1;
import androidx.recyclerview.widget.u0;
import com.google.android.material.button.MaterialButton;

/* loaded from: classes3.dex */
public final class l<S> extends u {
    public RecyclerView E;
    public View F;
    public View G;
    public View H;
    public View I;
    public MaterialButton J;
    public AccessibilityManager K;

    /* renamed from: e, reason: collision with root package name */
    public int f6027e;

    /* renamed from: i, reason: collision with root package name */
    public b f6028i;

    /* renamed from: v, reason: collision with root package name */
    public p f6029v;

    /* renamed from: w, reason: collision with root package name */
    public int f6030w;

    /* renamed from: x, reason: collision with root package name */
    public c f6031x;

    /* renamed from: y, reason: collision with root package name */
    public RecyclerView f6032y;

    @Override // androidx.fragment.app.Fragment
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (bundle == null) {
            bundle = getArguments();
        }
        this.f6027e = bundle.getInt("THEME_RES_ID_KEY");
        if (bundle.getParcelable("GRID_SELECTOR_KEY") != null) {
            throw new ClassCastException();
        }
        this.f6028i = (b) bundle.getParcelable("CALENDAR_CONSTRAINTS_KEY");
        if (bundle.getParcelable("DAY_VIEW_DECORATOR_KEY") != null) {
            throw new ClassCastException();
        }
        this.f6029v = (p) bundle.getParcelable("CURRENT_MONTH_KEY");
    }

    @Override // androidx.fragment.app.Fragment
    public final View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        int i5;
        int i6;
        u0 u0Var;
        RecyclerView recyclerView;
        RecyclerView recyclerView2;
        ContextThemeWrapper contextThemeWrapper = new ContextThemeWrapper(getContext(), this.f6027e);
        this.f6031x = new c(contextThemeWrapper);
        LayoutInflater cloneInContext = layoutInflater.cloneInContext(contextThemeWrapper);
        this.K = (AccessibilityManager) requireContext().getSystemService("accessibility");
        p pVar = this.f6028i.f6008d;
        if (n.w(contextThemeWrapper, R.attr.windowFullscreen)) {
            i5 = com.discord.R.layout.mtrl_calendar_vertical;
            i6 = 1;
        } else {
            i5 = com.discord.R.layout.mtrl_calendar_horizontal;
            i6 = 0;
        }
        View inflate = cloneInContext.inflate(i5, viewGroup, false);
        Resources resources = requireContext().getResources();
        int dimensionPixelOffset = resources.getDimensionPixelOffset(com.discord.R.dimen.mtrl_calendar_navigation_bottom_padding) + resources.getDimensionPixelOffset(com.discord.R.dimen.mtrl_calendar_navigation_top_padding) + resources.getDimensionPixelSize(com.discord.R.dimen.mtrl_calendar_navigation_height);
        int dimensionPixelSize = resources.getDimensionPixelSize(com.discord.R.dimen.mtrl_calendar_days_of_week_height);
        int i10 = q.f6054v;
        inflate.setMinimumHeight(dimensionPixelOffset + dimensionPixelSize + (resources.getDimensionPixelOffset(com.discord.R.dimen.mtrl_calendar_month_vertical_padding) * (i10 - 1)) + (resources.getDimensionPixelSize(com.discord.R.dimen.mtrl_calendar_day_height) * i10) + resources.getDimensionPixelOffset(com.discord.R.dimen.mtrl_calendar_bottom_padding));
        GridView gridView = (GridView) inflate.findViewById(com.discord.R.id.mtrl_calendar_days_of_week);
        s0.p(gridView, new g(0));
        int i11 = this.f6028i.f6012w;
        gridView.setAdapter((ListAdapter) (i11 > 0 ? new e(i11) : new e()));
        gridView.setNumColumns(pVar.f6050v);
        gridView.setEnabled(false);
        this.E = (RecyclerView) inflate.findViewById(com.discord.R.id.mtrl_calendar_months);
        getContext();
        this.E.setLayoutManager(new h(this, i6, i6));
        this.E.setTag("MONTHS_VIEW_GROUP_TAG");
        t tVar = new t(contextThemeWrapper, this.f6028i, new i(this));
        this.E.setAdapter(tVar);
        int integer = contextThemeWrapper.getResources().getInteger(com.discord.R.integer.mtrl_calendar_year_selector_span);
        RecyclerView recyclerView3 = (RecyclerView) inflate.findViewById(com.discord.R.id.mtrl_calendar_year_selector_frame);
        this.f6032y = recyclerView3;
        if (recyclerView3 != null) {
            recyclerView3.setHasFixedSize(true);
            this.f6032y.setLayoutManager(new GridLayoutManager(integer, 0));
            this.f6032y.setAdapter(new a0(this));
            this.f6032y.addItemDecoration(new j(this));
        }
        View findViewById = inflate.findViewById(com.discord.R.id.month_navigation_fragment_toggle);
        b bVar = tVar.a;
        if (findViewById != null) {
            MaterialButton materialButton = (MaterialButton) inflate.findViewById(com.discord.R.id.month_navigation_fragment_toggle);
            this.J = materialButton;
            materialButton.setTag("SELECTOR_TOGGLE_TAG");
            s0.p(this.J, new ch.a(2, this));
            View findViewById2 = inflate.findViewById(com.discord.R.id.month_navigation_previous);
            this.F = findViewById2;
            findViewById2.setTag("NAVIGATION_PREV_TAG");
            View findViewById3 = inflate.findViewById(com.discord.R.id.month_navigation_next);
            this.G = findViewById3;
            findViewById3.setTag("NAVIGATION_NEXT_TAG");
            this.H = inflate.findViewById(com.discord.R.id.mtrl_calendar_year_selector_frame);
            this.I = inflate.findViewById(com.discord.R.id.mtrl_calendar_day_selector_frame);
            u(1);
            this.J.setText(this.f6029v.i());
            this.E.addOnScrollListener(new k(this, tVar));
            this.J.setOnClickListener(new androidx.appcompat.widget.b(3, this));
            this.G.setOnClickListener(new f(this, tVar, 1));
            this.F.setOnClickListener(new f(this, tVar, 0));
            v(bVar.f6008d.v(this.f6029v));
        }
        if (!n.w(contextThemeWrapper, R.attr.windowFullscreen) && (recyclerView2 = (u0Var = new u0()).a) != (recyclerView = this.E)) {
            m1 m1Var = u0Var.f2431b;
            if (recyclerView2 != null) {
                recyclerView2.removeOnScrollListener(m1Var);
                u0Var.a.setOnFlingListener(null);
            }
            u0Var.a = recyclerView;
            if (recyclerView != null) {
                if (recyclerView.getOnFlingListener() != null) {
                    throw new IllegalStateException("An instance of OnFlingListener already set.");
                }
                u0Var.a.addOnScrollListener(m1Var);
                u0Var.a.setOnFlingListener(u0Var);
                new Scroller(u0Var.a.getContext(), new DecelerateInterpolator());
                u0Var.b();
            }
        }
        this.E.scrollToPosition(bVar.f6008d.v(this.f6029v));
        s0.p(this.E, new g(1));
        return inflate;
    }

    @Override // androidx.fragment.app.Fragment
    public final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putInt("THEME_RES_ID_KEY", this.f6027e);
        bundle.putParcelable("GRID_SELECTOR_KEY", null);
        bundle.putParcelable("CALENDAR_CONSTRAINTS_KEY", this.f6028i);
        bundle.putParcelable("DAY_VIEW_DECORATOR_KEY", null);
        bundle.putParcelable("CURRENT_MONTH_KEY", this.f6029v);
    }

    public final void t(p pVar) {
        t tVar = (t) this.E.getAdapter();
        int v5 = tVar.a.f6008d.v(pVar);
        AccessibilityManager accessibilityManager = this.K;
        if (accessibilityManager == null || !accessibilityManager.isEnabled()) {
            int v6 = v5 - tVar.a.f6008d.v(this.f6029v);
            boolean z5 = Math.abs(v6) > 3;
            boolean z6 = v6 > 0;
            this.f6029v = pVar;
            if (z5 && z6) {
                this.E.scrollToPosition(v5 - 3);
                this.E.post(new af.p(v5, 1, this));
            } else if (z5) {
                this.E.scrollToPosition(v5 + 3);
                this.E.post(new af.p(v5, 1, this));
            } else {
                this.E.post(new af.p(v5, 1, this));
            }
        } else {
            this.f6029v = pVar;
            this.E.scrollToPosition(v5);
        }
        v(v5);
    }

    public final void u(int i5) {
        this.f6030w = i5;
        if (i5 == 2) {
            this.f6032y.getLayoutManager().scrollToPosition(this.f6029v.f6049i - ((a0) this.f6032y.getAdapter()).a.f6028i.f6008d.f6049i);
            this.H.setVisibility(0);
            this.I.setVisibility(8);
            this.F.setVisibility(8);
            this.G.setVisibility(8);
            return;
        }
        if (i5 == 1) {
            this.H.setVisibility(8);
            this.I.setVisibility(0);
            this.F.setVisibility(0);
            this.G.setVisibility(0);
            t(this.f6029v);
        }
    }

    public final void v(int i5) {
        this.G.setEnabled(i5 + 1 < this.E.getAdapter().getItemCount());
        this.F.setEnabled(i5 - 1 >= 0);
    }
}
