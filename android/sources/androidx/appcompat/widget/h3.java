package androidx.appcompat.widget;

import android.app.SearchableInfo;
import android.content.ComponentName;
import android.content.Context;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.database.Cursor;
import android.graphics.drawable.Drawable;
import android.net.Uri;
import android.os.Bundle;
import android.text.SpannableString;
import android.text.TextUtils;
import android.text.style.TextAppearanceSpan;
import android.util.Log;
import android.util.TypedValue;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;
import com.discord.R;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.List;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class h3 extends b2.b implements View.OnClickListener {
    public static final /* synthetic */ int U = 0;
    public final int E;
    public final int F;
    public final LayoutInflater G;
    public final f3 H;
    public final SearchableInfo I;
    public final Context J;
    public final WeakHashMap K;
    public final int L;
    public int M;
    public ColorStateList N;
    public int O;
    public int P;
    public int Q;
    public int R;
    public int S;
    public int T;

    public h3(Context context, f3 f3Var, SearchableInfo searchableInfo, WeakHashMap weakHashMap) {
        int suggestionRowLayout = f3Var.getSuggestionRowLayout();
        this.f2726e = true;
        this.f2727i = null;
        this.f2725d = false;
        this.f2728v = -1;
        this.f2729w = new b2.a(this);
        this.f2730x = new d2(1, this);
        this.F = suggestionRowLayout;
        this.E = suggestionRowLayout;
        this.G = (LayoutInflater) context.getSystemService("layout_inflater");
        this.M = 1;
        this.O = -1;
        this.P = -1;
        this.Q = -1;
        this.R = -1;
        this.S = -1;
        this.T = -1;
        this.H = f3Var;
        this.I = searchableInfo;
        this.L = f3Var.getSuggestionCommitIconResId();
        this.J = context;
        this.K = weakHashMap;
    }

    public static String h(Cursor cursor, int i5) {
        if (i5 == -1) {
            return null;
        }
        try {
            return cursor.getString(i5);
        } catch (Exception e9) {
            Log.e("SuggestionsAdapter", "unexpected error retrieving valid column from cursor, did the remote process die?", e9);
            return null;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0132  */
    /* JADX WARN: Removed duplicated region for block: B:57:0x0134  */
    @Override // b2.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(View view, Cursor cursor) {
        int i5;
        int i6;
        Drawable f2;
        ActivityInfo activityInfo;
        int iconResource;
        String str;
        g3 g3Var = (g3) view.getTag();
        int i10 = this.T;
        int i11 = i10 != -1 ? cursor.getInt(i10) : 0;
        TextView textView = g3Var.a;
        TextView textView2 = g3Var.f998b;
        ImageView imageView = g3Var.f1001e;
        if (textView != null) {
            String h6 = h(cursor, this.O);
            textView.setText(h6);
            if (TextUtils.isEmpty(h6)) {
                textView.setVisibility(8);
            } else {
                textView.setVisibility(0);
            }
        }
        Context context = this.J;
        if (textView2 != null) {
            String h7 = h(cursor, this.Q);
            if (h7 != null) {
                if (this.N == null) {
                    TypedValue typedValue = new TypedValue();
                    context.getTheme().resolveAttribute(R.attr.textColorSearchUrl, typedValue, true);
                    this.N = context.getResources().getColorStateList(typedValue.resourceId);
                }
                SpannableString spannableString = new SpannableString(h7);
                spannableString.setSpan(new TextAppearanceSpan(null, 0, 0, this.N, null), 0, h7.length(), 33);
                str = spannableString;
            } else {
                str = h(cursor, this.P);
            }
            if (TextUtils.isEmpty(str)) {
                if (textView != null) {
                    textView.setSingleLine(false);
                    textView.setMaxLines(2);
                }
            } else if (textView != null) {
                textView.setSingleLine(true);
                textView.setMaxLines(1);
            }
            textView2.setText(str);
            if (TextUtils.isEmpty(str)) {
                textView2.setVisibility(8);
            } else {
                textView2.setVisibility(0);
            }
        }
        ImageView imageView2 = g3Var.f999c;
        if (imageView2 != null) {
            int i12 = this.R;
            if (i12 == -1) {
                f2 = null;
            } else {
                f2 = f(cursor.getString(i12));
                if (f2 == null) {
                    ComponentName searchActivity = this.I.getSearchActivity();
                    String flattenToShortString = searchActivity.flattenToShortString();
                    WeakHashMap weakHashMap = this.K;
                    if (weakHashMap.containsKey(flattenToShortString)) {
                        Drawable.ConstantState constantState = (Drawable.ConstantState) weakHashMap.get(flattenToShortString);
                        f2 = constantState == null ? null : constantState.newDrawable(context.getResources());
                    } else {
                        PackageManager packageManager = context.getPackageManager();
                        try {
                            activityInfo = packageManager.getActivityInfo(searchActivity, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                            iconResource = activityInfo.getIconResource();
                        } catch (PackageManager.NameNotFoundException e9) {
                            Log.w("SuggestionsAdapter", e9.toString());
                        }
                        if (iconResource != 0) {
                            Drawable drawable = packageManager.getDrawable(searchActivity.getPackageName(), iconResource, activityInfo.applicationInfo);
                            if (drawable == null) {
                                StringBuilder r5 = a3.e.r(iconResource, "Invalid icon resource ", " for ");
                                r5.append(searchActivity.flattenToShortString());
                                Log.w("SuggestionsAdapter", r5.toString());
                            } else {
                                f2 = drawable;
                                weakHashMap.put(flattenToShortString, f2 != null ? null : f2.getConstantState());
                            }
                        }
                        f2 = null;
                        weakHashMap.put(flattenToShortString, f2 != null ? null : f2.getConstantState());
                    }
                    if (f2 == null) {
                        f2 = context.getPackageManager().getDefaultActivityIcon();
                    }
                }
            }
            imageView2.setImageDrawable(f2);
            if (f2 == null) {
                imageView2.setVisibility(4);
            } else {
                imageView2.setVisibility(0);
                f2.setVisible(false, false);
                f2.setVisible(true, false);
            }
        }
        ImageView imageView3 = g3Var.f1000d;
        if (imageView3 != null) {
            int i13 = this.S;
            Drawable f10 = i13 == -1 ? null : f(cursor.getString(i13));
            imageView3.setImageDrawable(f10);
            if (f10 != null) {
                imageView3.setVisibility(0);
                f10.setVisible(false, false);
                i5 = 1;
                f10.setVisible(true, false);
                i6 = this.M;
                if (i6 == 2 && (i6 != i5 || (i11 & 1) == 0)) {
                    imageView.setVisibility(8);
                    return;
                }
                imageView.setVisibility(0);
                imageView.setTag(textView.getText());
                imageView.setOnClickListener(this);
            }
            imageView3.setVisibility(8);
        }
        i5 = 1;
        i6 = this.M;
        if (i6 == 2) {
        }
        imageView.setVisibility(0);
        imageView.setTag(textView.getText());
        imageView.setOnClickListener(this);
    }

    @Override // b2.b
    public final void b(Cursor cursor) {
        try {
            super.b(cursor);
            if (cursor != null) {
                this.O = cursor.getColumnIndex("suggest_text_1");
                this.P = cursor.getColumnIndex("suggest_text_2");
                this.Q = cursor.getColumnIndex("suggest_text_2_url");
                this.R = cursor.getColumnIndex("suggest_icon_1");
                this.S = cursor.getColumnIndex("suggest_icon_2");
                this.T = cursor.getColumnIndex("suggest_flags");
            }
        } catch (Exception e9) {
            Log.e("SuggestionsAdapter", "error changing cursor and caching columns", e9);
        }
    }

    @Override // b2.b
    public final String c(Cursor cursor) {
        String h6;
        String h7;
        if (cursor == null) {
            return null;
        }
        String h10 = h(cursor, cursor.getColumnIndex("suggest_intent_query"));
        if (h10 != null) {
            return h10;
        }
        SearchableInfo searchableInfo = this.I;
        if (searchableInfo.shouldRewriteQueryFromData() && (h7 = h(cursor, cursor.getColumnIndex("suggest_intent_data"))) != null) {
            return h7;
        }
        if (!searchableInfo.shouldRewriteQueryFromText() || (h6 = h(cursor, cursor.getColumnIndex("suggest_text_1"))) == null) {
            return null;
        }
        return h6;
    }

    @Override // b2.b
    public final View d(ViewGroup viewGroup) {
        View inflate = this.G.inflate(this.E, viewGroup, false);
        inflate.setTag(new g3(inflate));
        ((ImageView) inflate.findViewById(R.id.edit_query)).setImageResource(this.L);
        return inflate;
    }

    public final Drawable e(Uri uri) {
        int parseInt;
        String authority = uri.getAuthority();
        if (TextUtils.isEmpty(authority)) {
            throw new FileNotFoundException("No authority: " + uri);
        }
        try {
            Resources resourcesForApplication = this.J.getPackageManager().getResourcesForApplication(authority);
            List<String> pathSegments = uri.getPathSegments();
            if (pathSegments == null) {
                throw new FileNotFoundException("No path: " + uri);
            }
            int size = pathSegments.size();
            if (size == 1) {
                try {
                    parseInt = Integer.parseInt(pathSegments.get(0));
                } catch (NumberFormatException unused) {
                    throw new FileNotFoundException("Single path segment is not a resource ID: " + uri);
                }
            } else {
                if (size != 2) {
                    throw new FileNotFoundException("More than two path segments: " + uri);
                }
                parseInt = resourcesForApplication.getIdentifier(pathSegments.get(1), pathSegments.get(0), authority);
            }
            if (parseInt != 0) {
                return resourcesForApplication.getDrawable(parseInt);
            }
            throw new FileNotFoundException("No resource found for: " + uri);
        } catch (PackageManager.NameNotFoundException unused2) {
            throw new FileNotFoundException("No package found for authority: " + uri);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x010c  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Drawable f(String str) {
        WeakHashMap weakHashMap = this.K;
        Context context = this.J;
        Drawable drawable = null;
        if (str != null && !str.isEmpty() && !"0".equals(str)) {
            try {
                int parseInt = Integer.parseInt(str);
                String str2 = "android.resource://" + context.getPackageName() + "/" + parseInt;
                Drawable.ConstantState constantState = (Drawable.ConstantState) weakHashMap.get(str2);
                Drawable newDrawable = constantState == null ? null : constantState.newDrawable();
                if (newDrawable != null) {
                    return newDrawable;
                }
                Drawable drawable2 = context.getDrawable(parseInt);
                if (drawable2 != null) {
                    weakHashMap.put(str2, drawable2.getConstantState());
                }
                return drawable2;
            } catch (Resources.NotFoundException unused) {
                Log.w("SuggestionsAdapter", "Icon resource not found: ".concat(str));
                return null;
            } catch (NumberFormatException unused2) {
                Drawable.ConstantState constantState2 = (Drawable.ConstantState) weakHashMap.get(str);
                Drawable newDrawable2 = constantState2 == null ? null : constantState2.newDrawable();
                if (newDrawable2 != null) {
                    return newDrawable2;
                }
                Uri parse = Uri.parse(str);
                try {
                } catch (FileNotFoundException e9) {
                    Log.w("SuggestionsAdapter", "Icon not found: " + parse + ", " + e9.getMessage());
                    if (drawable != null) {
                        weakHashMap.put(str, drawable.getConstantState());
                    }
                    return drawable;
                }
                if ("android.resource".equals(parse.getScheme())) {
                    try {
                        drawable = e(parse);
                        if (drawable != null) {
                        }
                    } catch (Resources.NotFoundException unused3) {
                        throw new FileNotFoundException("Resource does not exist: " + parse);
                    }
                } else {
                    InputStream openInputStream = context.getContentResolver().openInputStream(parse);
                    if (openInputStream == null) {
                        throw new FileNotFoundException("Failed to open " + parse);
                    }
                    try {
                        Drawable createFromStream = Drawable.createFromStream(openInputStream, null);
                        try {
                            openInputStream.close();
                        } catch (IOException e10) {
                            Log.e("SuggestionsAdapter", "Error closing icon stream for " + parse, e10);
                        }
                        drawable = createFromStream;
                        if (drawable != null) {
                        }
                    } finally {
                    }
                }
            }
        }
        return drawable;
    }

    public final Cursor g(SearchableInfo searchableInfo, String str) {
        String suggestAuthority;
        String[] strArr = null;
        if (searchableInfo == null || (suggestAuthority = searchableInfo.getSuggestAuthority()) == null) {
            return null;
        }
        Uri.Builder fragment = new Uri.Builder().scheme("content").authority(suggestAuthority).query("").fragment("");
        String suggestPath = searchableInfo.getSuggestPath();
        if (suggestPath != null) {
            fragment.appendEncodedPath(suggestPath);
        }
        fragment.appendPath("search_suggest_query");
        String suggestSelection = searchableInfo.getSuggestSelection();
        if (suggestSelection != null) {
            strArr = new String[]{str};
        } else {
            fragment.appendPath(str);
        }
        String[] strArr2 = strArr;
        fragment.appendQueryParameter("limit", String.valueOf(50));
        return this.J.getContentResolver().query(fragment.build(), null, suggestSelection, strArr2, null);
    }

    @Override // b2.b, android.widget.BaseAdapter, android.widget.SpinnerAdapter
    public final View getDropDownView(int i5, View view, ViewGroup viewGroup) {
        try {
            return super.getDropDownView(i5, view, viewGroup);
        } catch (RuntimeException e9) {
            Log.w("SuggestionsAdapter", "Search suggestions cursor threw exception.", e9);
            View inflate = this.G.inflate(this.F, viewGroup, false);
            if (inflate != null) {
                ((g3) inflate.getTag()).a.setText(e9.toString());
            }
            return inflate;
        }
    }

    @Override // b2.b, android.widget.Adapter
    public final View getView(int i5, View view, ViewGroup viewGroup) {
        try {
            return super.getView(i5, view, viewGroup);
        } catch (RuntimeException e9) {
            Log.w("SuggestionsAdapter", "Search suggestions cursor threw exception.", e9);
            View d6 = d(viewGroup);
            ((g3) d6.getTag()).a.setText(e9.toString());
            return d6;
        }
    }

    @Override // android.widget.BaseAdapter, android.widget.Adapter
    public final boolean hasStableIds() {
        return false;
    }

    @Override // android.widget.BaseAdapter
    public final void notifyDataSetChanged() {
        super.notifyDataSetChanged();
        Cursor cursor = this.f2727i;
        Bundle extras = cursor != null ? cursor.getExtras() : null;
        if (extras != null) {
            extras.getBoolean("in_progress");
        }
    }

    @Override // android.widget.BaseAdapter
    public final void notifyDataSetInvalidated() {
        super.notifyDataSetInvalidated();
        Cursor cursor = this.f2727i;
        Bundle extras = cursor != null ? cursor.getExtras() : null;
        if (extras != null) {
            extras.getBoolean("in_progress");
        }
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        Object tag = view.getTag();
        if (tag instanceof CharSequence) {
            this.H.p((CharSequence) tag);
        }
    }
}
