package androidx.appcompat.widget;

import android.app.SearchableInfo;
import android.content.ActivityNotFoundException;
import android.content.ComponentName;
import android.content.Intent;
import android.content.res.TypedArray;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.CheckedTextView;
import androidx.appcompat.view.ActionMode;
import com.discord.R;
import com.google.android.exoplayer2.ui.TrackSelectionView;
import java.util.ArrayList;
import java.util.HashMap;

/* loaded from: classes.dex */
public final class b implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f922d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f923e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f922d = i5;
        this.f923e = obj;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        Message message;
        Message message2;
        Message message3;
        switch (this.f922d) {
            case 0:
                ((ActionMode) this.f923e).a();
                break;
            case 1:
                com.swmansion.rnscreens.b bVar = (com.swmansion.rnscreens.b) this.f923e;
                SearchView$SearchAutoComplete searchView$SearchAutoComplete = bVar.M;
                if (view != bVar.Q) {
                    if (view != bVar.S) {
                        if (view != bVar.R) {
                            if (view != bVar.T) {
                                if (view == searchView$SearchAutoComplete) {
                                    bVar.l();
                                    break;
                                }
                            } else {
                                SearchableInfo searchableInfo = bVar.B0;
                                if (searchableInfo != null) {
                                    try {
                                        if (!searchableInfo.getVoiceSearchLaunchWebSearch()) {
                                            if (searchableInfo.getVoiceSearchLaunchRecognizer()) {
                                                bVar.getContext().startActivity(bVar.k(bVar.f960i0, searchableInfo));
                                                break;
                                            }
                                        } else {
                                            Intent intent = new Intent(bVar.h0);
                                            ComponentName searchActivity = searchableInfo.getSearchActivity();
                                            intent.putExtra("calling_package", searchActivity == null ? null : searchActivity.flattenToShortString());
                                            bVar.getContext().startActivity(intent);
                                            break;
                                        }
                                    } catch (ActivityNotFoundException unused) {
                                        Log.w("SearchView", "Could not find voice search activity");
                                        return;
                                    }
                                }
                            }
                        } else {
                            bVar.q();
                            break;
                        }
                    } else {
                        bVar.m();
                        break;
                    }
                } else {
                    bVar.x(false);
                    searchView$SearchAutoComplete.requestFocus();
                    searchView$SearchAutoComplete.setImeVisibility(true);
                    View.OnClickListener onClickListener = bVar.f965n0;
                    if (onClickListener != null) {
                        onClickListener.onClick(bVar);
                        break;
                    }
                }
                break;
            case 2:
                r3 r3Var = ((Toolbar) this.f923e).f894m0;
                n.l lVar = r3Var == null ? null : r3Var.f1089e;
                if (lVar != null) {
                    lVar.collapseActionView();
                    break;
                }
                break;
            case 3:
                com.google.android.material.datepicker.l lVar2 = (com.google.android.material.datepicker.l) this.f923e;
                int i5 = lVar2.f6030w;
                if (i5 != 2) {
                    if (i5 == 1) {
                        lVar2.u(2);
                        lVar2.f6032y.announceForAccessibility(lVar2.getString(R.string.mtrl_picker_toggled_to_year_selection));
                        break;
                    }
                } else {
                    lVar2.u(1);
                    lVar2.E.announceForAccessibility(lVar2.getString(R.string.mtrl_picker_toggled_to_day_selection));
                    break;
                }
                break;
            case 4:
                n.l itemData = ((fh.e) view).getItemData();
                rg.b bVar2 = (rg.b) this.f923e;
                boolean q5 = bVar2.f8599m0.a.q(itemData, bVar2.f8598l0, 0);
                if (itemData != null && itemData.isCheckable()) {
                    if (!q5 || itemData.isChecked()) {
                        bVar2.setCheckedItem(itemData);
                        break;
                    }
                }
                break;
            case 5:
                TrackSelectionView trackSelectionView = (TrackSelectionView) this.f923e;
                HashMap hashMap = trackSelectionView.f5562y;
                boolean z5 = true;
                if (view == trackSelectionView.f5558i) {
                    trackSelectionView.I = true;
                    hashMap.clear();
                } else if (view == trackSelectionView.f5559v) {
                    trackSelectionView.I = false;
                    hashMap.clear();
                } else {
                    trackSelectionView.I = false;
                    Object tag = view.getTag();
                    tag.getClass();
                    he.t tVar = (he.t) tag;
                    hc.t1 t1Var = tVar.a;
                    nd.z0 z0Var = t1Var.f9888e;
                    int i6 = tVar.f10011b;
                    ge.s sVar = (ge.s) hashMap.get(z0Var);
                    if (sVar == null) {
                        if (!trackSelectionView.F && hashMap.size() > 0) {
                            hashMap.clear();
                        }
                        hashMap.put(z0Var, new ge.s(z0Var, fi.e0.s(Integer.valueOf(i6))));
                    } else {
                        ArrayList arrayList = new ArrayList(sVar.f9206e);
                        boolean isChecked = ((CheckedTextView) view).isChecked();
                        boolean z6 = trackSelectionView.E && t1Var.f9889i;
                        if (!z6 && (!trackSelectionView.F || trackSelectionView.f5561x.size() <= 1)) {
                            z5 = false;
                        }
                        if (isChecked && z5) {
                            arrayList.remove(Integer.valueOf(i6));
                            if (arrayList.isEmpty()) {
                                hashMap.remove(z0Var);
                            } else {
                                hashMap.put(z0Var, new ge.s(z0Var, arrayList));
                            }
                        } else if (!isChecked) {
                            if (z6) {
                                arrayList.add(Integer.valueOf(i6));
                                hashMap.put(z0Var, new ge.s(z0Var, arrayList));
                            } else {
                                hashMap.put(z0Var, new ge.s(z0Var, fi.e0.s(Integer.valueOf(i6))));
                            }
                        }
                    }
                }
                trackSelectionView.a();
                break;
            case 6:
                i.d dVar = (i.d) this.f923e;
                Message obtain = (view != dVar.f10285i || (message3 = dVar.k) == null) ? (view != dVar.f10286l || (message2 = dVar.f10288n) == null) ? (view != dVar.f10289o || (message = dVar.f10291q) == null) ? null : Message.obtain(message) : Message.obtain(message2) : Message.obtain(message3);
                if (obtain != null) {
                    obtain.sendToTarget();
                }
                dVar.E.obtainMessage(1, dVar.f10278b).sendToTarget();
                break;
            default:
                wm.m mVar = (wm.m) this.f923e;
                if (mVar.G && mVar.isShowing()) {
                    if (!mVar.I) {
                        TypedArray obtainStyledAttributes = mVar.getContext().obtainStyledAttributes(new int[]{android.R.attr.windowCloseOnTouchOutside});
                        mVar.H = obtainStyledAttributes.getBoolean(0, true);
                        obtainStyledAttributes.recycle();
                        mVar.I = true;
                    }
                    if (mVar.H) {
                        mVar.cancel();
                        break;
                    }
                }
                break;
        }
    }
}
