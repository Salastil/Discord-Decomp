package androidx.appcompat.widget;

import android.app.PendingIntent;
import android.app.SearchableInfo;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.database.Cursor;
import android.graphics.Rect;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Parcelable;
import android.text.Editable;
import android.text.SpannableStringBuilder;
import android.text.TextUtils;
import android.text.style.ImageSpan;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AutoCompleteTextView;
import android.widget.ImageView;
import com.discord.R;
import java.lang.reflect.Method;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public abstract class f3 extends y1 implements m.a {
    public static final b3 G0;
    public int A0;
    public SearchableInfo B0;
    public Bundle C0;
    public final s2 D0;
    public final s2 E0;
    public final WeakHashMap F0;
    public final SearchView$SearchAutoComplete M;
    public final View N;
    public final View O;
    public final View P;
    public final ImageView Q;
    public final ImageView R;
    public final ImageView S;
    public final ImageView T;
    public final View U;
    public e3 V;
    public final Rect W;
    public final Rect a0;

    /* renamed from: b0, reason: collision with root package name */
    public final int[] f954b0;

    /* renamed from: c0, reason: collision with root package name */
    public final int[] f955c0;

    /* renamed from: d0, reason: collision with root package name */
    public final ImageView f956d0;

    /* renamed from: e0, reason: collision with root package name */
    public final Drawable f957e0;

    /* renamed from: f0, reason: collision with root package name */
    public final int f958f0;

    /* renamed from: g0, reason: collision with root package name */
    public final int f959g0;
    public final Intent h0;

    /* renamed from: i0, reason: collision with root package name */
    public final Intent f960i0;

    /* renamed from: j0, reason: collision with root package name */
    public final CharSequence f961j0;

    /* renamed from: k0, reason: collision with root package name */
    public z2 f962k0;

    /* renamed from: l0, reason: collision with root package name */
    public y2 f963l0;

    /* renamed from: m0, reason: collision with root package name */
    public View.OnFocusChangeListener f964m0;

    /* renamed from: n0, reason: collision with root package name */
    public View.OnClickListener f965n0;

    /* renamed from: o0, reason: collision with root package name */
    public boolean f966o0;

    /* renamed from: p0, reason: collision with root package name */
    public boolean f967p0;

    /* renamed from: q0, reason: collision with root package name */
    public b2.b f968q0;

    /* renamed from: r0, reason: collision with root package name */
    public boolean f969r0;

    /* renamed from: s0, reason: collision with root package name */
    public CharSequence f970s0;

    /* renamed from: t0, reason: collision with root package name */
    public boolean f971t0;

    /* renamed from: u0, reason: collision with root package name */
    public boolean f972u0;

    /* renamed from: v0, reason: collision with root package name */
    public int f973v0;

    /* renamed from: w0, reason: collision with root package name */
    public boolean f974w0;

    /* renamed from: x0, reason: collision with root package name */
    public String f975x0;

    /* renamed from: y0, reason: collision with root package name */
    public CharSequence f976y0;

    /* renamed from: z0, reason: collision with root package name */
    public boolean f977z0;

    static {
        b3 b3Var = null;
        if (Build.VERSION.SDK_INT < 29) {
            b3 b3Var2 = new b3();
            b3Var2.a = null;
            b3Var2.f925b = null;
            b3Var2.f926c = null;
            b3.a();
            try {
                Method declaredMethod = AutoCompleteTextView.class.getDeclaredMethod("doBeforeTextChanged", null);
                b3Var2.a = declaredMethod;
                declaredMethod.setAccessible(true);
            } catch (NoSuchMethodException unused) {
            }
            try {
                Method declaredMethod2 = AutoCompleteTextView.class.getDeclaredMethod("doAfterTextChanged", null);
                b3Var2.f925b = declaredMethod2;
                declaredMethod2.setAccessible(true);
            } catch (NoSuchMethodException unused2) {
            }
            try {
                Method method = AutoCompleteTextView.class.getMethod("ensureImeVisible", Boolean.TYPE);
                b3Var2.f926c = method;
                method.setAccessible(true);
            } catch (NoSuchMethodException unused3) {
            }
            b3Var = b3Var2;
        }
        G0 = b3Var;
    }

    public f3(Context context) {
        super(context, null, R.attr.searchViewStyle);
        this.W = new Rect();
        this.a0 = new Rect();
        this.f954b0 = new int[2];
        this.f955c0 = new int[2];
        com.swmansion.rnscreens.b bVar = (com.swmansion.rnscreens.b) this;
        this.D0 = new s2(bVar, 0);
        this.E0 = new s2(bVar, 1);
        this.F0 = new WeakHashMap();
        int i5 = 1;
        b bVar2 = new b(i5, bVar);
        v2 v2Var = new v2(bVar);
        w2 w2Var = new w2(bVar);
        n0 n0Var = new n0(i5, bVar);
        z1 z1Var = new z1(i5, bVar);
        r2 r2Var = new r2(bVar);
        int[] iArr = h.a.f9463u;
        TypedArray obtainStyledAttributes = context.obtainStyledAttributes(null, iArr, R.attr.searchViewStyle, 0);
        e4.m mVar = new e4.m(context, obtainStyledAttributes);
        androidx.core.view.s0.o(this, context, iArr, null, obtainStyledAttributes, R.attr.searchViewStyle, 0);
        LayoutInflater.from(context).inflate(obtainStyledAttributes.getResourceId(19, R.layout.abc_search_view), (ViewGroup) this, true);
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = (SearchView$SearchAutoComplete) findViewById(R.id.search_src_text);
        this.M = searchView$SearchAutoComplete;
        searchView$SearchAutoComplete.setSearchView(this);
        this.N = findViewById(R.id.search_edit_frame);
        View findViewById = findViewById(R.id.search_plate);
        this.O = findViewById;
        View findViewById2 = findViewById(R.id.submit_area);
        this.P = findViewById2;
        ImageView imageView = (ImageView) findViewById(R.id.search_button);
        this.Q = imageView;
        ImageView imageView2 = (ImageView) findViewById(R.id.search_go_btn);
        this.R = imageView2;
        ImageView imageView3 = (ImageView) findViewById(R.id.search_close_btn);
        this.S = imageView3;
        ImageView imageView4 = (ImageView) findViewById(R.id.search_voice_btn);
        this.T = imageView4;
        ImageView imageView5 = (ImageView) findViewById(R.id.search_mag_icon);
        this.f956d0 = imageView5;
        findViewById.setBackground(mVar.U(20));
        findViewById2.setBackground(mVar.U(25));
        imageView.setImageDrawable(mVar.U(23));
        imageView2.setImageDrawable(mVar.U(15));
        imageView3.setImageDrawable(mVar.U(12));
        imageView4.setImageDrawable(mVar.U(28));
        imageView5.setImageDrawable(mVar.U(23));
        this.f957e0 = mVar.U(22);
        nt.a.I(imageView, getResources().getString(R.string.abc_searchview_description_search));
        this.f958f0 = obtainStyledAttributes.getResourceId(26, R.layout.abc_search_dropdown_item_icons_2line);
        this.f959g0 = obtainStyledAttributes.getResourceId(13, 0);
        imageView.setOnClickListener(bVar2);
        imageView3.setOnClickListener(bVar2);
        imageView2.setOnClickListener(bVar2);
        imageView4.setOnClickListener(bVar2);
        searchView$SearchAutoComplete.setOnClickListener(bVar2);
        searchView$SearchAutoComplete.addTextChangedListener(r2Var);
        searchView$SearchAutoComplete.setOnEditorActionListener(w2Var);
        searchView$SearchAutoComplete.setOnItemClickListener(n0Var);
        searchView$SearchAutoComplete.setOnItemSelectedListener(z1Var);
        searchView$SearchAutoComplete.setOnKeyListener(v2Var);
        searchView$SearchAutoComplete.setOnFocusChangeListener(new t2(bVar, 0));
        setIconifiedByDefault(obtainStyledAttributes.getBoolean(18, true));
        int dimensionPixelSize = obtainStyledAttributes.getDimensionPixelSize(2, -1);
        if (dimensionPixelSize != -1) {
            setMaxWidth(dimensionPixelSize);
        }
        this.f961j0 = obtainStyledAttributes.getText(14);
        this.f970s0 = obtainStyledAttributes.getText(21);
        int i6 = obtainStyledAttributes.getInt(6, -1);
        if (i6 != -1) {
            setImeOptions(i6);
        }
        int i10 = obtainStyledAttributes.getInt(5, -1);
        if (i10 != -1) {
            setInputType(i10);
        }
        setFocusable(obtainStyledAttributes.getBoolean(1, true));
        mVar.e0();
        Intent intent = new Intent("android.speech.action.WEB_SEARCH");
        this.h0 = intent;
        intent.addFlags(268435456);
        intent.putExtra("android.speech.extra.LANGUAGE_MODEL", "web_search");
        Intent intent2 = new Intent("android.speech.action.RECOGNIZE_SPEECH");
        this.f960i0 = intent2;
        intent2.addFlags(268435456);
        View findViewById3 = findViewById(searchView$SearchAutoComplete.getDropDownAnchor());
        this.U = findViewById3;
        if (findViewById3 != null) {
            findViewById3.addOnLayoutChangeListener(new u2(0, bVar));
        }
        x(this.f966o0);
        u();
    }

    private int getPreferredHeight() {
        return getContext().getResources().getDimensionPixelSize(R.dimen.abc_search_view_preferred_height);
    }

    private int getPreferredWidth() {
        return getContext().getResources().getDimensionPixelSize(R.dimen.abc_search_view_preferred_width);
    }

    private void setQuery(CharSequence charSequence) {
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        searchView$SearchAutoComplete.setText(charSequence);
        searchView$SearchAutoComplete.setSelection(TextUtils.isEmpty(charSequence) ? 0 : charSequence.length());
    }

    @Override // android.view.ViewGroup, android.view.View
    public final void clearFocus() {
        this.f972u0 = true;
        super.clearFocus();
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        searchView$SearchAutoComplete.clearFocus();
        searchView$SearchAutoComplete.setImeVisibility(false);
        this.f972u0 = false;
    }

    public int getImeOptions() {
        return this.M.getImeOptions();
    }

    public int getInputType() {
        return this.M.getInputType();
    }

    public int getMaxWidth() {
        return this.f973v0;
    }

    public CharSequence getQuery() {
        return this.M.getText();
    }

    public CharSequence getQueryHint() {
        CharSequence charSequence = this.f970s0;
        if (charSequence != null) {
            return charSequence;
        }
        SearchableInfo searchableInfo = this.B0;
        return (searchableInfo == null || searchableInfo.getHintId() == 0) ? this.f961j0 : getContext().getText(this.B0.getHintId());
    }

    public int getSuggestionCommitIconResId() {
        return this.f959g0;
    }

    public int getSuggestionRowLayout() {
        return this.f958f0;
    }

    public b2.b getSuggestionsAdapter() {
        return this.f968q0;
    }

    public final Intent j(String str, Uri uri, String str2, String str3) {
        Intent intent = new Intent(str);
        intent.addFlags(268435456);
        if (uri != null) {
            intent.setData(uri);
        }
        intent.putExtra("user_query", this.f976y0);
        if (str3 != null) {
            intent.putExtra("query", str3);
        }
        if (str2 != null) {
            intent.putExtra("intent_extra_data_key", str2);
        }
        Bundle bundle = this.C0;
        if (bundle != null) {
            intent.putExtra("app_data", bundle);
        }
        intent.setComponent(this.B0.getSearchActivity());
        return intent;
    }

    public final Intent k(Intent intent, SearchableInfo searchableInfo) {
        ComponentName searchActivity = searchableInfo.getSearchActivity();
        Intent intent2 = new Intent("android.intent.action.SEARCH");
        intent2.setComponent(searchActivity);
        PendingIntent activity = PendingIntent.getActivity(getContext(), 0, intent2, 1107296256);
        Bundle bundle = new Bundle();
        Bundle bundle2 = this.C0;
        if (bundle2 != null) {
            bundle.putParcelable("app_data", bundle2);
        }
        Intent intent3 = new Intent(intent);
        Resources resources = getResources();
        String string = searchableInfo.getVoiceLanguageModeId() != 0 ? resources.getString(searchableInfo.getVoiceLanguageModeId()) : "free_form";
        String string2 = searchableInfo.getVoicePromptTextId() != 0 ? resources.getString(searchableInfo.getVoicePromptTextId()) : null;
        String string3 = searchableInfo.getVoiceLanguageId() != 0 ? resources.getString(searchableInfo.getVoiceLanguageId()) : null;
        int voiceMaxResults = searchableInfo.getVoiceMaxResults() != 0 ? searchableInfo.getVoiceMaxResults() : 1;
        intent3.putExtra("android.speech.extra.LANGUAGE_MODEL", string);
        intent3.putExtra("android.speech.extra.PROMPT", string2);
        intent3.putExtra("android.speech.extra.LANGUAGE", string3);
        intent3.putExtra("android.speech.extra.MAX_RESULTS", voiceMaxResults);
        intent3.putExtra("calling_package", searchActivity != null ? searchActivity.flattenToShortString() : null);
        intent3.putExtra("android.speech.extra.RESULTS_PENDINGINTENT", activity);
        intent3.putExtra("android.speech.extra.RESULTS_PENDINGINTENT_BUNDLE", bundle);
        return intent3;
    }

    public final void l() {
        int i5 = Build.VERSION.SDK_INT;
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        if (i5 >= 29) {
            x2.a(searchView$SearchAutoComplete);
            return;
        }
        b3 b3Var = G0;
        b3Var.getClass();
        b3.a();
        Method method = b3Var.a;
        if (method != null) {
            try {
                method.invoke(searchView$SearchAutoComplete, null);
            } catch (Exception unused) {
            }
        }
        b3Var.getClass();
        b3.a();
        Method method2 = b3Var.f925b;
        if (method2 != null) {
            try {
                method2.invoke(searchView$SearchAutoComplete, null);
            } catch (Exception unused2) {
            }
        }
    }

    public final void m() {
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        if (!TextUtils.isEmpty(searchView$SearchAutoComplete.getText())) {
            searchView$SearchAutoComplete.setText("");
            searchView$SearchAutoComplete.requestFocus();
            searchView$SearchAutoComplete.setImeVisibility(true);
        } else if (this.f966o0) {
            y2 y2Var = this.f963l0;
            if (y2Var == null || !y2Var.b()) {
                clearFocus();
                x(true);
            }
        }
    }

    public final void n(int i5) {
        int i6;
        String h6;
        Cursor cursor = this.f968q0.f2727i;
        if (cursor != null && cursor.moveToPosition(i5)) {
            Intent intent = null;
            try {
                int i10 = h3.U;
                String h7 = h3.h(cursor, cursor.getColumnIndex("suggest_intent_action"));
                if (h7 == null) {
                    h7 = this.B0.getSuggestIntentAction();
                }
                if (h7 == null) {
                    h7 = "android.intent.action.SEARCH";
                }
                String h10 = h3.h(cursor, cursor.getColumnIndex("suggest_intent_data"));
                if (h10 == null) {
                    h10 = this.B0.getSuggestIntentData();
                }
                if (h10 != null && (h6 = h3.h(cursor, cursor.getColumnIndex("suggest_intent_data_id"))) != null) {
                    h10 = h10 + "/" + Uri.encode(h6);
                }
                intent = j(h7, h10 == null ? null : Uri.parse(h10), h3.h(cursor, cursor.getColumnIndex("suggest_intent_extra_data")), h3.h(cursor, cursor.getColumnIndex("suggest_intent_query")));
            } catch (RuntimeException e9) {
                try {
                    i6 = cursor.getPosition();
                } catch (RuntimeException unused) {
                    i6 = -1;
                }
                Log.w("SearchView", "Search suggestions cursor at row " + i6 + " returned exception.", e9);
            }
            if (intent != null) {
                try {
                    getContext().startActivity(intent);
                } catch (RuntimeException e10) {
                    Log.e("SearchView", "Failed launch activity: " + intent, e10);
                }
            }
        }
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        searchView$SearchAutoComplete.setImeVisibility(false);
        searchView$SearchAutoComplete.dismissDropDown();
    }

    public final void o(int i5) {
        Editable text = this.M.getText();
        Cursor cursor = this.f968q0.f2727i;
        if (cursor == null) {
            return;
        }
        if (!cursor.moveToPosition(i5)) {
            setQuery(text);
            return;
        }
        String c6 = this.f968q0.c(cursor);
        if (c6 != null) {
            setQuery(c6);
        } else {
            setQuery(text);
        }
    }

    @Override // m.a
    public final void onActionViewCollapsed() {
        r("");
        clearFocus();
        x(true);
        this.M.setImeOptions(this.A0);
        this.f977z0 = false;
    }

    @Override // m.a
    public final void onActionViewExpanded() {
        if (this.f977z0) {
            return;
        }
        this.f977z0 = true;
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        int imeOptions = searchView$SearchAutoComplete.getImeOptions();
        this.A0 = imeOptions;
        searchView$SearchAutoComplete.setImeOptions(imeOptions | 33554432);
        searchView$SearchAutoComplete.setText("");
        setIconified(false);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        removeCallbacks(this.D0);
        post(this.E0);
        super.onDetachedFromWindow();
    }

    @Override // androidx.appcompat.widget.y1, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        super.onLayout(z5, i5, i6, i10, i11);
        if (z5) {
            SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
            int[] iArr = this.f954b0;
            searchView$SearchAutoComplete.getLocationInWindow(iArr);
            int[] iArr2 = this.f955c0;
            getLocationInWindow(iArr2);
            int i12 = iArr[1] - iArr2[1];
            int i13 = iArr[0] - iArr2[0];
            int width = searchView$SearchAutoComplete.getWidth() + i13;
            int height = searchView$SearchAutoComplete.getHeight() + i12;
            Rect rect = this.W;
            rect.set(i13, i12, width, height);
            int i14 = rect.left;
            int i15 = rect.right;
            int i16 = i11 - i6;
            Rect rect2 = this.a0;
            rect2.set(i14, 0, i15, i16);
            e3 e3Var = this.V;
            if (e3Var == null) {
                e3 e3Var2 = new e3(searchView$SearchAutoComplete, rect2, rect);
                this.V = e3Var2;
                setTouchDelegate(e3Var2);
            } else {
                e3Var.f948b.set(rect2);
                Rect rect3 = e3Var.f950d;
                rect3.set(rect2);
                int i17 = -e3Var.f951e;
                rect3.inset(i17, i17);
                e3Var.f949c.set(rect);
            }
        }
    }

    @Override // androidx.appcompat.widget.y1, android.view.View
    public final void onMeasure(int i5, int i6) {
        int i10;
        if (this.f967p0) {
            super.onMeasure(i5, i6);
            return;
        }
        int mode = View.MeasureSpec.getMode(i5);
        int size = View.MeasureSpec.getSize(i5);
        if (mode == Integer.MIN_VALUE) {
            int i11 = this.f973v0;
            size = i11 > 0 ? Math.min(i11, size) : Math.min(getPreferredWidth(), size);
        } else if (mode == 0) {
            size = this.f973v0;
            if (size <= 0) {
                size = getPreferredWidth();
            }
        } else if (mode == 1073741824 && (i10 = this.f973v0) > 0) {
            size = Math.min(i10, size);
        }
        int mode2 = View.MeasureSpec.getMode(i6);
        int size2 = View.MeasureSpec.getSize(i6);
        if (mode2 == Integer.MIN_VALUE) {
            size2 = Math.min(getPreferredHeight(), size2);
        } else if (mode2 == 0) {
            size2 = getPreferredHeight();
        }
        super.onMeasure(View.MeasureSpec.makeMeasureSpec(size, 1073741824), View.MeasureSpec.makeMeasureSpec(size2, 1073741824));
    }

    @Override // android.view.View
    public final void onRestoreInstanceState(Parcelable parcelable) {
        if (!(parcelable instanceof d3)) {
            super.onRestoreInstanceState(parcelable);
            return;
        }
        d3 d3Var = (d3) parcelable;
        super.onRestoreInstanceState(d3Var.f7399d);
        x(d3Var.f946i);
        requestLayout();
    }

    @Override // android.view.View
    public final Parcelable onSaveInstanceState() {
        d3 d3Var = new d3(super.onSaveInstanceState());
        d3Var.f946i = this.f967p0;
        return d3Var;
    }

    @Override // android.view.View
    public final void onWindowFocusChanged(boolean z5) {
        super.onWindowFocusChanged(z5);
        post(this.D0);
    }

    public final void p(CharSequence charSequence) {
        setQuery(charSequence);
    }

    public final void q() {
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        Editable text = searchView$SearchAutoComplete.getText();
        if (text == null || TextUtils.getTrimmedLength(text) <= 0) {
            return;
        }
        z2 z2Var = this.f962k0;
        if (z2Var != null) {
            String charSequence = text.toString();
            com.swmansion.rnscreens.r0 r0Var = (com.swmansion.rnscreens.r0) ((ve.i) z2Var).f19405d;
            r0Var.k(new cn.b(r0Var.J, r0Var.getId(), charSequence, 2, false));
        } else {
            if (this.B0 != null) {
                getContext().startActivity(j("android.intent.action.SEARCH", null, null, text.toString()));
            }
            searchView$SearchAutoComplete.setImeVisibility(false);
            searchView$SearchAutoComplete.dismissDropDown();
        }
    }

    public final void r(String str) {
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        searchView$SearchAutoComplete.setText(str);
        if (str != null) {
            searchView$SearchAutoComplete.setSelection(searchView$SearchAutoComplete.length());
            this.f976y0 = str;
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    public final boolean requestFocus(int i5, Rect rect) {
        if (this.f972u0 || !isFocusable()) {
            return false;
        }
        if (this.f967p0) {
            return super.requestFocus(i5, rect);
        }
        boolean requestFocus = this.M.requestFocus(i5, rect);
        if (requestFocus) {
            x(false);
        }
        return requestFocus;
    }

    public final void s() {
        boolean isEmpty = TextUtils.isEmpty(this.M.getText());
        int i5 = (!isEmpty || (this.f966o0 && !this.f977z0)) ? 0 : 8;
        ImageView imageView = this.S;
        imageView.setVisibility(i5);
        Drawable drawable = imageView.getDrawable();
        if (drawable != null) {
            drawable.setState(!isEmpty ? ViewGroup.ENABLED_STATE_SET : ViewGroup.EMPTY_STATE_SET);
        }
    }

    public void setAppSearchData(Bundle bundle) {
        this.C0 = bundle;
    }

    public void setIconified(boolean z5) {
        if (z5) {
            m();
            return;
        }
        x(false);
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        searchView$SearchAutoComplete.requestFocus();
        searchView$SearchAutoComplete.setImeVisibility(true);
        View.OnClickListener onClickListener = this.f965n0;
        if (onClickListener != null) {
            onClickListener.onClick(this);
        }
    }

    public void setIconifiedByDefault(boolean z5) {
        if (this.f966o0 == z5) {
            return;
        }
        this.f966o0 = z5;
        x(z5);
        u();
    }

    public void setImeOptions(int i5) {
        this.M.setImeOptions(i5);
    }

    public void setInputType(int i5) {
        this.M.setInputType(i5);
    }

    public void setMaxWidth(int i5) {
        this.f973v0 = i5;
        requestLayout();
    }

    public void setOnCloseListener(y2 y2Var) {
        this.f963l0 = y2Var;
    }

    public void setOnQueryTextFocusChangeListener(View.OnFocusChangeListener onFocusChangeListener) {
        this.f964m0 = onFocusChangeListener;
    }

    public void setOnQueryTextListener(z2 z2Var) {
        this.f962k0 = z2Var;
    }

    public void setOnSearchClickListener(View.OnClickListener onClickListener) {
        this.f965n0 = onClickListener;
    }

    public void setOnSuggestionListener(a3 a3Var) {
    }

    public void setQueryHint(CharSequence charSequence) {
        this.f970s0 = charSequence;
        u();
    }

    public void setQueryRefinementEnabled(boolean z5) {
        this.f971t0 = z5;
        b2.b bVar = this.f968q0;
        if (bVar instanceof h3) {
            ((h3) bVar).M = z5 ? 2 : 1;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:28:0x0095, code lost:
    
        if (getContext().getPackageManager().resolveActivity(r0, com.discord.key_commands.KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != null) goto L35;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setSearchableInfo(SearchableInfo searchableInfo) {
        this.B0 = searchableInfo;
        Intent intent = null;
        boolean z5 = true;
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        if (searchableInfo != null) {
            searchView$SearchAutoComplete.setThreshold(searchableInfo.getSuggestThreshold());
            searchView$SearchAutoComplete.setImeOptions(this.B0.getImeOptions());
            int inputType = this.B0.getInputType();
            if ((inputType & 15) == 1) {
                inputType &= -65537;
                if (this.B0.getSuggestAuthority() != null) {
                    inputType |= 589824;
                }
            }
            searchView$SearchAutoComplete.setInputType(inputType);
            b2.b bVar = this.f968q0;
            if (bVar != null) {
                bVar.b(null);
            }
            if (this.B0.getSuggestAuthority() != null) {
                h3 h3Var = new h3(getContext(), this, this.B0, this.F0);
                this.f968q0 = h3Var;
                searchView$SearchAutoComplete.setAdapter(h3Var);
                ((h3) this.f968q0).M = this.f971t0 ? 2 : 1;
            }
            u();
        }
        SearchableInfo searchableInfo2 = this.B0;
        if (searchableInfo2 != null && searchableInfo2.getVoiceSearchEnabled()) {
            if (this.B0.getVoiceSearchLaunchWebSearch()) {
                intent = this.h0;
            } else if (this.B0.getVoiceSearchLaunchRecognizer()) {
                intent = this.f960i0;
            }
            if (intent != null) {
            }
        }
        z5 = false;
        this.f974w0 = z5;
        if (z5) {
            searchView$SearchAutoComplete.setPrivateImeOptions("nm");
        }
        x(this.f967p0);
    }

    public void setSubmitButtonEnabled(boolean z5) {
        this.f969r0 = z5;
        x(this.f967p0);
    }

    public void setSuggestionsAdapter(b2.b bVar) {
        this.f968q0 = bVar;
        this.M.setAdapter(bVar);
    }

    public final void t() {
        int[] iArr = this.M.hasFocus() ? ViewGroup.FOCUSED_STATE_SET : ViewGroup.EMPTY_STATE_SET;
        Drawable background = this.O.getBackground();
        if (background != null) {
            background.setState(iArr);
        }
        Drawable background2 = this.P.getBackground();
        if (background2 != null) {
            background2.setState(iArr);
        }
        invalidate();
    }

    public final void u() {
        Drawable drawable;
        CharSequence queryHint = getQueryHint();
        if (queryHint == null) {
            queryHint = "";
        }
        boolean z5 = this.f966o0;
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = this.M;
        if (z5 && (drawable = this.f957e0) != null) {
            int textSize = (int) (searchView$SearchAutoComplete.getTextSize() * 1.25d);
            drawable.setBounds(0, 0, textSize, textSize);
            SpannableStringBuilder spannableStringBuilder = new SpannableStringBuilder("   ");
            spannableStringBuilder.setSpan(new ImageSpan(drawable), 1, 2, 33);
            spannableStringBuilder.append(queryHint);
            queryHint = spannableStringBuilder;
        }
        searchView$SearchAutoComplete.setHint(queryHint);
    }

    public final void v() {
        this.P.setVisibility(((this.f969r0 || this.f974w0) && !this.f967p0 && (this.R.getVisibility() == 0 || this.T.getVisibility() == 0)) ? 0 : 8);
    }

    public final void w(boolean z5) {
        boolean z6 = this.f969r0;
        this.R.setVisibility((!z6 || !(z6 || this.f974w0) || this.f967p0 || !hasFocus() || (!z5 && this.f974w0)) ? 8 : 0);
    }

    public final void x(boolean z5) {
        this.f967p0 = z5;
        int i5 = 8;
        int i6 = z5 ? 0 : 8;
        boolean isEmpty = TextUtils.isEmpty(this.M.getText());
        this.Q.setVisibility(i6);
        w(!isEmpty);
        this.N.setVisibility(z5 ? 8 : 0);
        ImageView imageView = this.f956d0;
        imageView.setVisibility((imageView.getDrawable() == null || this.f966o0) ? 8 : 0);
        s();
        if (this.f974w0 && !this.f967p0 && isEmpty) {
            this.R.setVisibility(8);
            i5 = 0;
        }
        this.T.setVisibility(i5);
        v();
    }
}
