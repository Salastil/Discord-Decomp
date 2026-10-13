package androidx.fragment.app;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import androidx.activity.ComponentDialog;
import androidx.annotation.NonNull;
import androidx.lifecycle.LiveData;
import androidx.lifecycle.Observer;
import com.discord.R;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public class DialogFragment extends Fragment implements DialogInterface.OnCancelListener, DialogInterface.OnDismissListener {
    private static final String SAVED_BACK_STACK_ID = "android:backStackId";
    private static final String SAVED_CANCELABLE = "android:cancelable";
    private static final String SAVED_DIALOG_STATE_TAG = "android:savedDialogState";
    private static final String SAVED_INTERNAL_DIALOG_SHOWING = "android:dialogShowing";
    private static final String SAVED_SHOWS_DIALOG = "android:showsDialog";
    private static final String SAVED_STYLE = "android:style";
    private static final String SAVED_THEME = "android:theme";
    public static final int STYLE_NORMAL = 0;
    public static final int STYLE_NO_FRAME = 2;
    public static final int STYLE_NO_INPUT = 3;
    public static final int STYLE_NO_TITLE = 1;
    private boolean mCreatingDialog;
    private Dialog mDialog;
    private boolean mDismissed;
    private Handler mHandler;
    private boolean mShownByMe;
    private boolean mViewDestroyed;
    private Runnable mDismissRunnable = new u(0, this);
    private DialogInterface.OnCancelListener mOnCancelListener = new v(this);
    private DialogInterface.OnDismissListener mOnDismissListener = new w(this);
    private int mStyle = 0;
    private int mTheme = 0;
    private boolean mCancelable = true;
    private boolean mShowsDialog = true;
    private int mBackStackId = -1;
    private Observer mObserver = new e0(1, this);
    private boolean mDialogCreated = false;

    @Override // androidx.fragment.app.Fragment
    @NonNull
    public FragmentContainer createFragmentContainer() {
        return new x(this, super.createFragmentContainer());
    }

    public void dismiss() {
        t(false, false, false);
    }

    public void dismissAllowingStateLoss() {
        t(true, false, false);
    }

    public void dismissNow() {
        t(false, false, true);
    }

    public Dialog getDialog() {
        return this.mDialog;
    }

    public boolean getShowsDialog() {
        return this.mShowsDialog;
    }

    public int getTheme() {
        return this.mTheme;
    }

    public boolean isCancelable() {
        return this.mCancelable;
    }

    @Override // androidx.fragment.app.Fragment
    @Deprecated
    public void onActivityCreated(Bundle bundle) {
        super.onActivityCreated(bundle);
    }

    @Override // androidx.fragment.app.Fragment
    public void onAttach(@NonNull Context context) {
        Object obj;
        super.onAttach(context);
        LiveData viewLifecycleOwnerLiveData = getViewLifecycleOwnerLiveData();
        Observer observer = this.mObserver;
        viewLifecycleOwnerLiveData.getClass();
        LiveData.a("observeForever");
        androidx.lifecycle.y yVar = new androidx.lifecycle.y(viewLifecycleOwnerLiveData, observer);
        p.f fVar = viewLifecycleOwnerLiveData.f2151b;
        p.c a = fVar.a(observer);
        if (a != null) {
            obj = a.f16250e;
        } else {
            p.c cVar = new p.c(observer, yVar);
            fVar.f16259v++;
            p.c cVar2 = fVar.f16257e;
            if (cVar2 == null) {
                fVar.f16256d = cVar;
                fVar.f16257e = cVar;
            } else {
                cVar2.f16251i = cVar;
                cVar.f16252v = cVar2;
                fVar.f16257e = cVar;
            }
            obj = null;
        }
        androidx.lifecycle.a0 a0Var = (androidx.lifecycle.a0) obj;
        if (a0Var instanceof androidx.lifecycle.z) {
            throw new IllegalArgumentException("Cannot add the same observer with different lifecycles");
        }
        if (a0Var == null) {
            yVar.a(true);
        }
        if (this.mShownByMe) {
            return;
        }
        this.mDismissed = false;
    }

    @Override // android.content.DialogInterface.OnCancelListener
    public void onCancel(@NonNull DialogInterface dialogInterface) {
    }

    @Override // androidx.fragment.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.mHandler = new Handler();
        this.mShowsDialog = this.mContainerId == 0;
        if (bundle != null) {
            this.mStyle = bundle.getInt(SAVED_STYLE, 0);
            this.mTheme = bundle.getInt(SAVED_THEME, 0);
            this.mCancelable = bundle.getBoolean(SAVED_CANCELABLE, true);
            this.mShowsDialog = bundle.getBoolean(SAVED_SHOWS_DIALOG, this.mShowsDialog);
            this.mBackStackId = bundle.getInt(SAVED_BACK_STACK_ID, -1);
        }
    }

    public Dialog onCreateDialog(Bundle bundle) {
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "onCreateDialog called for DialogFragment " + this);
        }
        return new ComponentDialog(requireContext(), getTheme());
    }

    @Override // androidx.fragment.app.Fragment
    public void onDestroyView() {
        super.onDestroyView();
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            this.mViewDestroyed = true;
            dialog.setOnDismissListener(null);
            this.mDialog.dismiss();
            if (!this.mDismissed) {
                onDismiss(this.mDialog);
            }
            this.mDialog = null;
            this.mDialogCreated = false;
        }
    }

    @Override // androidx.fragment.app.Fragment
    public void onDetach() {
        super.onDetach();
        if (!this.mShownByMe && !this.mDismissed) {
            this.mDismissed = true;
        }
        getViewLifecycleOwnerLiveData().g(this.mObserver);
    }

    @Override // android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        if (this.mViewDestroyed) {
            return;
        }
        if (FragmentManager.M(3)) {
            Log.d("FragmentManager", "onDismiss called for DialogFragment " + this);
        }
        t(true, true, false);
    }

    public View onFindViewById(int i5) {
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            return dialog.findViewById(i5);
        }
        return null;
    }

    @Override // androidx.fragment.app.Fragment
    @NonNull
    public LayoutInflater onGetLayoutInflater(Bundle bundle) {
        LayoutInflater onGetLayoutInflater = super.onGetLayoutInflater(bundle);
        boolean z5 = this.mShowsDialog;
        if (z5 && !this.mCreatingDialog) {
            if (z5 && !this.mDialogCreated) {
                try {
                    this.mCreatingDialog = true;
                    Dialog onCreateDialog = onCreateDialog(bundle);
                    this.mDialog = onCreateDialog;
                    if (this.mShowsDialog) {
                        setupDialog(onCreateDialog, this.mStyle);
                        Context context = getContext();
                        if (context instanceof Activity) {
                            this.mDialog.setOwnerActivity((Activity) context);
                        }
                        this.mDialog.setCancelable(this.mCancelable);
                        this.mDialog.setOnCancelListener(this.mOnCancelListener);
                        this.mDialog.setOnDismissListener(this.mOnDismissListener);
                        this.mDialogCreated = true;
                    } else {
                        this.mDialog = null;
                    }
                    this.mCreatingDialog = false;
                } catch (Throwable th2) {
                    this.mCreatingDialog = false;
                    throw th2;
                }
            }
            if (FragmentManager.M(2)) {
                Log.d("FragmentManager", "get layout inflater for DialogFragment " + this + " from dialog context");
            }
            Dialog dialog = this.mDialog;
            if (dialog != null) {
                return onGetLayoutInflater.cloneInContext(dialog.getContext());
            }
        } else if (FragmentManager.M(2)) {
            String str = "getting layout inflater for DialogFragment " + this;
            if (!this.mShowsDialog) {
                Log.d("FragmentManager", "mShowsDialog = false: " + str);
                return onGetLayoutInflater;
            }
            Log.d("FragmentManager", "mCreatingDialog = true: " + str);
        }
        return onGetLayoutInflater;
    }

    public boolean onHasView() {
        return this.mDialogCreated;
    }

    @Override // androidx.fragment.app.Fragment
    public void onSaveInstanceState(@NonNull Bundle bundle) {
        super.onSaveInstanceState(bundle);
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            Bundle onSaveInstanceState = dialog.onSaveInstanceState();
            onSaveInstanceState.putBoolean(SAVED_INTERNAL_DIALOG_SHOWING, false);
            bundle.putBundle(SAVED_DIALOG_STATE_TAG, onSaveInstanceState);
        }
        int i5 = this.mStyle;
        if (i5 != 0) {
            bundle.putInt(SAVED_STYLE, i5);
        }
        int i6 = this.mTheme;
        if (i6 != 0) {
            bundle.putInt(SAVED_THEME, i6);
        }
        boolean z5 = this.mCancelable;
        if (!z5) {
            bundle.putBoolean(SAVED_CANCELABLE, z5);
        }
        boolean z6 = this.mShowsDialog;
        if (!z6) {
            bundle.putBoolean(SAVED_SHOWS_DIALOG, z6);
        }
        int i10 = this.mBackStackId;
        if (i10 != -1) {
            bundle.putInt(SAVED_BACK_STACK_ID, i10);
        }
    }

    @Override // androidx.fragment.app.Fragment
    public void onStart() {
        super.onStart();
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            this.mViewDestroyed = false;
            dialog.show();
            View decorView = this.mDialog.getWindow().getDecorView();
            androidx.lifecycle.c1.d(decorView, this);
            Intrinsics.checkNotNullParameter(decorView, "<this>");
            decorView.setTag(R.id.view_tree_view_model_store_owner, this);
            jb.a.H(decorView, this);
        }
    }

    @Override // androidx.fragment.app.Fragment
    public void onStop() {
        super.onStop();
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            dialog.hide();
        }
    }

    @Override // androidx.fragment.app.Fragment
    public void onViewStateRestored(Bundle bundle) {
        Bundle bundle2;
        super.onViewStateRestored(bundle);
        if (this.mDialog == null || bundle == null || (bundle2 = bundle.getBundle(SAVED_DIALOG_STATE_TAG)) == null) {
            return;
        }
        this.mDialog.onRestoreInstanceState(bundle2);
    }

    @Override // androidx.fragment.app.Fragment
    public void performCreateView(@NonNull LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        Bundle bundle2;
        super.performCreateView(layoutInflater, viewGroup, bundle);
        if (this.mView != null || this.mDialog == null || bundle == null || (bundle2 = bundle.getBundle(SAVED_DIALOG_STATE_TAG)) == null) {
            return;
        }
        this.mDialog.onRestoreInstanceState(bundle2);
    }

    @NonNull
    public final ComponentDialog requireComponentDialog() {
        Dialog requireDialog = requireDialog();
        if (requireDialog instanceof ComponentDialog) {
            return (ComponentDialog) requireDialog;
        }
        throw new IllegalStateException("DialogFragment " + this + " did not return a ComponentDialog instance from requireDialog(). The actual Dialog is " + requireDialog);
    }

    @NonNull
    public final Dialog requireDialog() {
        Dialog dialog = getDialog();
        if (dialog != null) {
            return dialog;
        }
        throw new IllegalStateException("DialogFragment " + this + " does not have a Dialog.");
    }

    public void setCancelable(boolean z5) {
        this.mCancelable = z5;
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            dialog.setCancelable(z5);
        }
    }

    public void setShowsDialog(boolean z5) {
        this.mShowsDialog = z5;
    }

    public void setStyle(int i5, int i6) {
        if (FragmentManager.M(2)) {
            Log.d("FragmentManager", "Setting style and theme for DialogFragment " + this + " to " + i5 + ", " + i6);
        }
        this.mStyle = i5;
        if (i5 == 2 || i5 == 3) {
            this.mTheme = android.R.style.Theme.Panel;
        }
        if (i6 != 0) {
            this.mTheme = i6;
        }
    }

    public void setupDialog(@NonNull Dialog dialog, int i5) {
        if (i5 != 1 && i5 != 2) {
            if (i5 != 3) {
                return;
            }
            Window window = dialog.getWindow();
            if (window != null) {
                window.addFlags(24);
            }
        }
        dialog.requestWindowFeature(1);
    }

    public void show(@NonNull FragmentManager fragmentManager, String str) {
        this.mDismissed = false;
        this.mShownByMe = true;
        fragmentManager.getClass();
        a aVar = new a(fragmentManager);
        aVar.f1949p = true;
        aVar.f(0, this, str, 1);
        aVar.c();
    }

    public void showNow(@NonNull FragmentManager fragmentManager, String str) {
        this.mDismissed = false;
        this.mShownByMe = true;
        fragmentManager.getClass();
        a aVar = new a(fragmentManager);
        aVar.f1949p = true;
        aVar.f(0, this, str, 1);
        aVar.n();
    }

    public final void t(boolean z5, boolean z6, boolean z7) {
        if (this.mDismissed) {
            return;
        }
        this.mDismissed = true;
        this.mShownByMe = false;
        Dialog dialog = this.mDialog;
        if (dialog != null) {
            dialog.setOnDismissListener(null);
            this.mDialog.dismiss();
            if (!z6) {
                if (Looper.myLooper() == this.mHandler.getLooper()) {
                    onDismiss(this.mDialog);
                } else {
                    this.mHandler.post(this.mDismissRunnable);
                }
            }
        }
        this.mViewDestroyed = true;
        if (this.mBackStackId < 0) {
            FragmentManager parentFragmentManager = getParentFragmentManager();
            parentFragmentManager.getClass();
            a aVar = new a(parentFragmentManager);
            aVar.f1949p = true;
            aVar.g(this);
            if (z7) {
                aVar.n();
                return;
            } else if (z5) {
                aVar.m(true, true);
                return;
            } else {
                aVar.c();
                return;
            }
        }
        if (z7) {
            FragmentManager parentFragmentManager2 = getParentFragmentManager();
            int i5 = this.mBackStackId;
            if (i5 < 0) {
                parentFragmentManager2.getClass();
                throw new IllegalArgumentException(k0.d.i(i5, "Bad id: "));
            }
            parentFragmentManager2.U(i5, 1);
        } else {
            FragmentManager parentFragmentManager3 = getParentFragmentManager();
            int i6 = this.mBackStackId;
            parentFragmentManager3.getClass();
            if (i6 < 0) {
                throw new IllegalArgumentException(k0.d.i(i6, "Bad id: "));
            }
            parentFragmentManager3.x(new b1(parentFragmentManager3, null, i6), z5);
        }
        this.mBackStackId = -1;
    }

    public int show(@NonNull FragmentTransaction fragmentTransaction, String str) {
        this.mDismissed = false;
        this.mShownByMe = true;
        fragmentTransaction.f(0, this, str, 1);
        this.mViewDestroyed = false;
        int c6 = fragmentTransaction.c();
        this.mBackStackId = c6;
        return c6;
    }
}
