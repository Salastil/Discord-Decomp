package com.google.android.exoplayer2.ui;

import android.R;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import android.widget.CheckedTextView;
import android.widget.LinearLayout;
import androidx.appcompat.widget.b;
import com.google.android.exoplayer2.Format;
import gj.c;
import hc.t1;
import he.s;
import he.t;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import ke.o;
import nd.z0;

@Deprecated
/* loaded from: classes3.dex */
public class TrackSelectionView extends LinearLayout {
    public boolean E;
    public boolean F;
    public s G;
    public CheckedTextView[][] H;
    public boolean I;

    /* renamed from: d, reason: collision with root package name */
    public final int f5556d;

    /* renamed from: e, reason: collision with root package name */
    public final LayoutInflater f5557e;

    /* renamed from: i, reason: collision with root package name */
    public final CheckedTextView f5558i;

    /* renamed from: v, reason: collision with root package name */
    public final CheckedTextView f5559v;

    /* renamed from: w, reason: collision with root package name */
    public final b f5560w;

    /* renamed from: x, reason: collision with root package name */
    public final ArrayList f5561x;

    /* renamed from: y, reason: collision with root package name */
    public final HashMap f5562y;

    public TrackSelectionView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, 0);
        setOrientation(1);
        setSaveFromParentEnabled(false);
        TypedArray obtainStyledAttributes = context.getTheme().obtainStyledAttributes(new int[]{R.attr.selectableItemBackground});
        int resourceId = obtainStyledAttributes.getResourceId(0, 0);
        this.f5556d = resourceId;
        obtainStyledAttributes.recycle();
        LayoutInflater from = LayoutInflater.from(context);
        this.f5557e = from;
        b bVar = new b(5, this);
        this.f5560w = bVar;
        this.G = new c(getResources());
        this.f5561x = new ArrayList();
        this.f5562y = new HashMap();
        CheckedTextView checkedTextView = (CheckedTextView) from.inflate(R.layout.simple_list_item_single_choice, (ViewGroup) this, false);
        this.f5558i = checkedTextView;
        checkedTextView.setBackgroundResource(resourceId);
        checkedTextView.setText(com.discord.R.string.exo_track_selection_none);
        checkedTextView.setEnabled(false);
        checkedTextView.setFocusable(true);
        checkedTextView.setOnClickListener(bVar);
        checkedTextView.setVisibility(8);
        addView(checkedTextView);
        addView(from.inflate(com.discord.R.layout.exo_list_divider, (ViewGroup) this, false));
        CheckedTextView checkedTextView2 = (CheckedTextView) from.inflate(R.layout.simple_list_item_single_choice, (ViewGroup) this, false);
        this.f5559v = checkedTextView2;
        checkedTextView2.setBackgroundResource(resourceId);
        checkedTextView2.setText(com.discord.R.string.exo_track_selection_auto);
        checkedTextView2.setEnabled(false);
        checkedTextView2.setFocusable(true);
        checkedTextView2.setOnClickListener(bVar);
        addView(checkedTextView2);
    }

    public final void a() {
        this.f5558i.setChecked(this.I);
        boolean z5 = this.I;
        HashMap hashMap = this.f5562y;
        this.f5559v.setChecked(!z5 && hashMap.size() == 0);
        for (int i5 = 0; i5 < this.H.length; i5++) {
            ge.s sVar = (ge.s) hashMap.get(((t1) this.f5561x.get(i5)).f9888e);
            int i6 = 0;
            while (true) {
                CheckedTextView[] checkedTextViewArr = this.H[i5];
                if (i6 < checkedTextViewArr.length) {
                    if (sVar != null) {
                        Object tag = checkedTextViewArr[i6].getTag();
                        tag.getClass();
                        this.H[i5][i6].setChecked(sVar.f9206e.contains(Integer.valueOf(((t) tag).f10011b)));
                    } else {
                        checkedTextViewArr[i6].setChecked(false);
                    }
                    i6++;
                }
            }
        }
    }

    public final void b() {
        String u5;
        boolean z5;
        boolean z6;
        boolean z7 = true;
        for (int childCount = getChildCount() - 1; childCount >= 3; childCount--) {
            removeViewAt(childCount);
        }
        ArrayList arrayList = this.f5561x;
        boolean isEmpty = arrayList.isEmpty();
        CheckedTextView checkedTextView = this.f5559v;
        CheckedTextView checkedTextView2 = this.f5558i;
        boolean z8 = false;
        if (isEmpty) {
            checkedTextView2.setEnabled(false);
            checkedTextView.setEnabled(false);
            return;
        }
        checkedTextView2.setEnabled(true);
        checkedTextView.setEnabled(true);
        this.H = new CheckedTextView[arrayList.size()][];
        int i5 = 0;
        boolean z10 = this.F && arrayList.size() > 1;
        while (i5 < arrayList.size()) {
            t1 t1Var = (t1) arrayList.get(i5);
            boolean z11 = (this.E && t1Var.f9889i) ? z7 : z8 ? 1 : 0;
            CheckedTextView[][] checkedTextViewArr = this.H;
            int i6 = t1Var.f9887d;
            checkedTextViewArr[i5] = new CheckedTextView[i6];
            t[] tVarArr = new t[i6];
            for (int i10 = z8 ? 1 : 0; i10 < t1Var.f9887d; i10++) {
                tVarArr[i10] = new t(t1Var, i10);
            }
            int i11 = z8 ? 1 : 0;
            boolean z12 = z10;
            while (i11 < i6) {
                LayoutInflater layoutInflater = this.f5557e;
                if (i11 == 0) {
                    addView(layoutInflater.inflate(com.discord.R.layout.exo_list_divider, this, z8));
                }
                CheckedTextView checkedTextView3 = (CheckedTextView) layoutInflater.inflate((z11 || z12) ? R.layout.simple_list_item_multiple_choice : R.layout.simple_list_item_single_choice, this, z8);
                checkedTextView3.setBackgroundResource(this.f5556d);
                s sVar = this.G;
                t tVar = tVarArr[i11];
                Format format = tVar.a.f9888e.f15211v[tVar.f10011b];
                c cVar = (c) sVar;
                Resources resources = (Resources) cVar.f9329e;
                Resources resources2 = (Resources) cVar.f9329e;
                String str = format.I;
                int i12 = format.E;
                ArrayList arrayList2 = arrayList;
                int i13 = format.V;
                boolean z13 = z12;
                int i14 = format.O;
                int i15 = i5;
                int i16 = format.N;
                String str2 = format.F;
                int h6 = o.h(str);
                boolean z14 = z11;
                t[] tVarArr2 = tVarArr;
                if (h6 == -1) {
                    if (o.i(str2) == null) {
                        if (o.a(str2) == null) {
                            if (i16 == -1 && i14 == -1) {
                                if (i13 == -1 && format.W == -1) {
                                    h6 = -1;
                                }
                            }
                        }
                        h6 = 1;
                    }
                    h6 = 2;
                }
                if (h6 == 2) {
                    u5 = cVar.Q(cVar.y(format), (i16 == -1 || i14 == -1) ? "" : resources.getString(com.discord.R.string.exo_track_resolution, Integer.valueOf(i16), Integer.valueOf(i14)), i12 != -1 ? resources2.getString(com.discord.R.string.exo_track_bitrate, Float.valueOf(i12 / 1000000.0f)) : "");
                } else if (h6 == 1) {
                    u5 = cVar.Q(cVar.u(format), (i13 == -1 || i13 < 1) ? "" : i13 != 1 ? i13 != 2 ? (i13 == 6 || i13 == 7) ? resources.getString(com.discord.R.string.exo_track_surround_5_point_1) : i13 != 8 ? resources.getString(com.discord.R.string.exo_track_surround) : resources.getString(com.discord.R.string.exo_track_surround_7_point_1) : resources.getString(com.discord.R.string.exo_track_stereo) : resources.getString(com.discord.R.string.exo_track_mono), i12 != -1 ? resources2.getString(com.discord.R.string.exo_track_bitrate, Float.valueOf(i12 / 1000000.0f)) : "");
                } else {
                    u5 = cVar.u(format);
                }
                if (u5.length() == 0) {
                    u5 = resources.getString(com.discord.R.string.exo_track_unknown);
                }
                checkedTextView3.setText(u5);
                checkedTextView3.setTag(tVarArr2[i11]);
                if (t1Var.f9890v[i11] != 4) {
                    z5 = false;
                    checkedTextView3.setFocusable(false);
                    checkedTextView3.setEnabled(false);
                    z6 = true;
                } else {
                    z5 = false;
                    z6 = true;
                    checkedTextView3.setFocusable(true);
                    checkedTextView3.setOnClickListener(this.f5560w);
                }
                this.H[i15][i11] = checkedTextView3;
                addView(checkedTextView3);
                i11++;
                z8 = z5;
                z7 = z6;
                arrayList = arrayList2;
                z12 = z13;
                i5 = i15;
                z11 = z14;
                tVarArr = tVarArr2;
            }
            boolean z15 = z8 ? 1 : 0;
            i5++;
            arrayList = arrayList;
            z10 = z12;
        }
        a();
    }

    public boolean getIsDisabled() {
        return this.I;
    }

    public Map<z0, ge.s> getOverrides() {
        return this.f5562y;
    }

    public void setAllowAdaptiveSelections(boolean z5) {
        if (this.E != z5) {
            this.E = z5;
            b();
        }
    }

    public void setAllowMultipleOverrides(boolean z5) {
        if (this.F != z5) {
            this.F = z5;
            if (!z5) {
                HashMap hashMap = this.f5562y;
                if (hashMap.size() > 1) {
                    HashMap hashMap2 = new HashMap();
                    int i5 = 0;
                    while (true) {
                        ArrayList arrayList = this.f5561x;
                        if (i5 >= arrayList.size()) {
                            break;
                        }
                        ge.s sVar = (ge.s) hashMap.get(((t1) arrayList.get(i5)).f9888e);
                        if (sVar != null && hashMap2.isEmpty()) {
                            hashMap2.put(sVar.f9205d, sVar);
                        }
                        i5++;
                    }
                    hashMap.clear();
                    hashMap.putAll(hashMap2);
                }
            }
            b();
        }
    }

    public void setShowDisableOption(boolean z5) {
        this.f5558i.setVisibility(z5 ? 0 : 8);
    }

    public void setTrackNameProvider(s sVar) {
        sVar.getClass();
        this.G = sVar;
        b();
    }
}
